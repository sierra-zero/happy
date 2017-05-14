#pragma once

#include "serialize.hpp"

#include <memory>

namespace bb
{
	namespace net
	{
		//------------------------------------------------------------------------------------------------------------
		// Forward defines
		class context;

		template <class USER_IMPL, class NODE_IMPL> class node;

		//------------------------------------------------------------------------------------------------------------
		// Typedefs
		typedef size_t node_id;

		typedef const char* type_id;

		//------------------------------------------------------------------------------------------------------------
		// Node with unknown type
		class polymorphic_node : public std::enable_shared_from_this<polymorphic_node>
		{
		public:
			virtual ~polymorphic_node() { }

			template <typename VISITOR>
			void reflect(VISITOR& visitor)
			{
				this->pm_reflect(visitor);
			}

			virtual context* get_context() = 0;
			virtual node_id  get_node_id() = 0;
		private:
			virtual void     pm_reflect(BinarySerializer& visitor) = 0;
			virtual void     pm_reflect(BinaryDeserializer& visitor) = 0;
			virtual void     pm_reflect(TextSerializer& visitor) = 0;
			virtual void     pm_reflect(TextDeserializer& visitor) = 0;
			virtual void     pm_reflect(partial::UpdateVisitor<BinarySerializer>& visitor) = 0;
			virtual void     pm_reflect(partial::UpdateVisitor<BinaryDeserializer>& visitor) = 0;
			virtual void     pm_reflect(partial::UpdateVisitor<TextSerializer>& visitor) = 0;
			virtual void     pm_reflect(partial::UpdateVisitor<TextDeserializer>& visitor) = 0;
		};

		//------------------------------------------------------------------------------------------------------------
		// Node wrapper. Wraps around a node object, thereby declaring it as a node.
		// Dispatches all visitors to the wrapped object
		template <class USER_IMPL, class NODE_IMPL>
		class node : public USER_IMPL, public NODE_IMPL
		{
		public:
			using user_type = USER_IMPL;

			node(context* context, const char* type_id, node_id node_id)
				: NODE_IMPL(context, type_id, node_id)
				, USER_IMPL(/*net nodes must have a default constructor*/) { }

			virtual ~node() { }
			
			template <typename VISITOR>
			void reflect(VISITOR& visitor)
			{
				visitor("type_id", m_type_id);
				visitor("node_id", m_node_id);

				if (m_type_id.compare(USER_IMPL::get_type_id()))
				{
					throw std::exception("different type_id expected!");
				}

				user_type::reflect(visitor);
			}

			template <typename VISITOR>
			inline void __user_reflect(VISITOR& visitor)
			{
				user_type::reflect(visitor);
			}

			context* get_context() override                                                   { return m_context; }
			node_id  get_node_id() override                                                   { return m_node_id; }
		private:
			void     pm_reflect(BinarySerializer& visitor) override                           { reflect(visitor); }
			void     pm_reflect(BinaryDeserializer& visitor) override                         { reflect(visitor); }
			void     pm_reflect(TextSerializer& visitor) override                             { reflect(visitor); }
			void     pm_reflect(TextDeserializer& visitor) override                           { reflect(visitor); }
			void     pm_reflect(partial::UpdateVisitor<BinarySerializer>& visitor) override   { reflect(visitor); }
			void     pm_reflect(partial::UpdateVisitor<BinaryDeserializer>& visitor) override { reflect(visitor); }
			void     pm_reflect(partial::UpdateVisitor<TextSerializer>& visitor) override     { reflect(visitor); }
			void     pm_reflect(partial::UpdateVisitor<TextDeserializer>& visitor) override   { reflect(visitor); }
		};
	}
}