#pragma once

namespace bb
{
	//------------------------------------------------------------------------
	// Generic text serializer
	class TextSerializer
	{
	public:
		TextSerializer(std::ostream &stream)
			: m_stream(stream)
			, m_indentation(0) { }

		template <typename T>
		void operator()(const char* tag, T &x)
		{
			line() << tag << " ";
			write(x);
		}

	private:
		// arithmetic types
		template <typename T>
		typename std::enable_if<std::is_arithmetic<T>::value, void>::type write(T x)
		{
			stream() << x;
		}

		// enums
		template <typename T>
		typename std::enable_if<std::is_enum<T>::value, void>::type write(T x)
		{
			stream() << (size_t)x;
		}

		// dispatch serialization to reflect API
		template <class T>
		typename std::enable_if<!std::is_arithmetic<T>::value && !std::is_enum<T>::value, void>::type write(T &x)
		{
			stream() << "{";
			indent();
			reflect(*this, x);
			unindent();
			line() << "}";
		}

		// string serialization
		template <>
		void write(std::string &x)
		{
			stream() << "\"" << x << "\"";
		}

		// vector serialization
		template <typename T>
		void write(std::vector<T> &x)
		{
			stream() << "[";
			indent();
			for (auto &elem : x)
			{
				line();
				write(elem);
			}
			unindent();
			line() << "]";
		}

		// map serialization
		template <typename K, typename V>
		void write(std::map<K, V> &x)
		{
			stream() << "[";
			indent();
			for (auto &elem : x)
			{
				line();
				write(elem);
			}
			unindent();
			line() << "]";
		}

		std::ostream& stream()
		{
			return m_stream;
		}

		std::ostream& line()
		{
			m_stream << std::endl;
			for (int i = 0; i < m_indentation; ++i)
				m_stream << "  ";
			return m_stream;
		}

		void indent() { m_indentation++; }
		void unindent() { m_indentation--; }

		std::ostream &m_stream;
		int m_indentation;
	};

	namespace
	{
		void assert_exc(bool cond, const char* message)
		{
			if (!cond) throw std::exception(message);
		}
	}

	//------------------------------------------------------------------------
	// Generic text deserializer
	class TextDeserializer
	{
	public:
		TextDeserializer(std::istream &stream)
			: m_stream(stream) { }
		
		template <typename T>
		void operator()(const char* tag_expected, T &x)
		{
			std::string tag;
			m_stream >> tag;

			assert_exc(tag.compare(tag_expected) == 0, "wrong tag found");

			read(x);
		}

	private:
		// arithmetic types
		template <typename T>
		typename std::enable_if<std::is_arithmetic<T>::value, void>::type read(T &x)
		{
			m_stream >> x;
		}

		// enums
		template <typename T>
		typename std::enable_if<std::is_enum<T>::value, void>::type read(T &x)
		{
			size_t _x;
			m_stream >> _x;
			x = (T)_x;
		}

		// dispatch deserialization to reflect API
		template <class T>
		typename std::enable_if<!std::is_arithmetic<T>::value && !std::is_enum<T>::value, void>::type read(T &x)
		{
			assert_exc(get() == '{', "expected '{'");
			reflect(*this ,x);
			assert_exc(get() == '}', "expected '{'");
		}

		// string deserialization
		template <>
		void read(std::string &x)
		{
			assert_exc(get() == '"', "expected '\"'");
			getline(m_stream, x, '"');
		}

		// vector deserialization
		template <typename T>
		void read(std::vector<T> &x)
		{
			assert_exc(get() == '[', "expected '['");
			x.clear();
			char c;
			while ((c = peek()) != ']')
			{
				T elem; read(elem);
				x.push_back(elem);
			}
			assert_exc(get() == ']', "expected ']'");
		}

		// map deserialization
		template <typename K, typename V>
		void read(std::map<K, V> &x)
		{
			assert_exc(get() == '[', "expected '['");
			x.clear();
			char c;
			while ((c = peek()) != ']')
			{
				std::pair<K, V> elem; read(elem);
				x.insert(elem);
			}
			assert_exc(get() == ']', "expected ']'");
		}

		char get()
		{
			char c;
			while (isspace((c = m_stream.get())));
			return c;
		}

		char peek()
		{
			char c;
			while (isspace((c = m_stream.peek()))) m_stream.get();
			return c;
		}

		std::istream &m_stream;
	};
}