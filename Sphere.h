#pragma once
#include "VertexTypes.h"

#define FACE4(a, b, c, d) a-1, b-1, c-1, a-1, c-1, d-1
#define FACE3(a, b, c) a-1, b-1, c-1

static const happy::VertexPositionTexcoord g_SphereVertices[] = {
	{ bb::vec4( 0.000000f, -0.984808f,  0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.116978f, -0.321394f,  0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.219846f, -0.604023f,  0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.296198f, -0.813798f,  0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.336824f, -0.925417f,  0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.336824f, -0.925417f, -0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.296198f, -0.813798f, -0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.219846f, -0.604023f, -0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.116978f, -0.321394f, -0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.219846f, -0.262003f,  0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.413176f, -0.492404f,  0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.556670f, -0.663414f,  0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.633022f, -0.754407f,  0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.633022f, -0.754407f, -0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.556670f, -0.663414f, -0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.413176f, -0.492404f, -0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.219846f, -0.262003f, -0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.296198f, -0.171010f,  0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.556670f, -0.321394f,  0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.750000f, -0.433013f,  0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.852868f, -0.492404f,  0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.852868f, -0.492404f, -0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.750000f, -0.433013f, -0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.556670f, -0.321394f, -0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.296198f, -0.171010f, -0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.336824f, -0.059391f,  0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.633022f, -0.111619f,  0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.852868f, -0.150384f,  0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.969846f, -0.171010f,  0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.969846f, -0.171010f, -0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.852868f, -0.150384f, -0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.633022f, -0.111619f, -0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.336824f, -0.059391f, -0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.336824f,  0.059391f,  0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.633022f,  0.111619f,  0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.852868f,  0.150383f,  0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.969846f,  0.171010f,  0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.969846f,  0.171010f, -0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.852868f,  0.150383f, -0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.633022f,  0.111619f, -0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.336824f,  0.059391f, -0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.296198f,  0.171010f,  0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.556670f,  0.321394f,  0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.750000f,  0.433012f,  0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.852868f,  0.492404f,  0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.852868f,  0.492403f, -0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.750000f,  0.433012f, -0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.556670f,  0.321394f, -0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.296198f,  0.171010f, -0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.000000f, -0.000000f,  1.000000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.219846f,  0.262002f,  0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.413176f,  0.492404f,  0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.556670f,  0.663414f,  0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.633022f,  0.754406f,  0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.633022f,  0.754406f, -0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.556670f,  0.663414f, -0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.413176f,  0.492404f, -0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.219846f,  0.262002f, -0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.116978f,  0.321393f,  0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.219846f,  0.604022f,  0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.296198f,  0.813797f,  0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.336824f,  0.925416f,  0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.336824f,  0.925416f, -0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.296198f,  0.813797f, -0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.219846f,  0.604022f, -0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.116978f,  0.321394f, -0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.000000f,  0.342020f,  0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.000000f,  0.642787f,  0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.000000f,  0.866025f,  0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.000000f,  0.984807f,  0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.000000f,  0.984807f, -0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.000000f,  0.866025f, -0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.000000f,  0.642787f, -0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4(-0.000000f,  0.342020f, -0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.116978f,  0.321394f,  0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.219846f,  0.604023f,  0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.296198f,  0.813797f,  0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.336824f,  0.925416f,  0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.336824f,  0.925416f, -0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.296198f,  0.813797f, -0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.219846f,  0.604023f, -0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.116978f,  0.321394f, -0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.219846f,  0.262002f,  0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.413176f,  0.492404f,  0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.556670f,  0.663414f,  0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.633022f,  0.754406f,  0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.633022f,  0.754406f, -0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.556670f,  0.663414f, -0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.413176f,  0.492404f, -0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.219846f,  0.262002f, -0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.296198f,  0.171010f,  0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.556670f,  0.321394f,  0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.750000f,  0.433013f,  0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.852868f,  0.492404f,  0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.852868f,  0.492404f, -0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.750000f,  0.433013f, -0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.556670f,  0.321394f, -0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.296198f,  0.171010f, -0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.336824f,  0.059391f,  0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.633022f,  0.111619f,  0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.852868f,  0.150384f,  0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.969846f,  0.171010f,  0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.969846f,  0.171010f, -0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.852868f,  0.150384f, -0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.633022f,  0.111619f, -0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.336824f,  0.059391f, -0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.336824f, -0.059391f,  0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.633022f, -0.111619f,  0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.852868f, -0.150384f,  0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.969846f, -0.171010f,  0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.969846f, -0.171010f, -0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.852868f, -0.150384f, -0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.633022f, -0.111619f, -0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.336824f, -0.059391f, -0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.000000f, -0.000000f, -1.000000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.296198f, -0.171010f,  0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.556670f, -0.321394f,  0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.750000f, -0.433013f,  0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.852868f, -0.492404f,  0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.852868f, -0.492404f, -0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.750000f, -0.433013f, -0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.556670f, -0.321394f, -0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.296198f, -0.171010f, -0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.219846f, -0.262003f,  0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.413176f, -0.492404f,  0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.556670f, -0.663414f,  0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.633022f, -0.754406f,  0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.633022f, -0.754406f, -0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.556670f, -0.663414f, -0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.413176f, -0.492404f, -0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.219846f, -0.262003f, -0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.116978f, -0.321394f,  0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.219847f, -0.604023f,  0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.296198f, -0.813798f,  0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.336824f, -0.925416f,  0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.336824f, -0.925416f, -0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.296198f, -0.813798f, -0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.219847f, -0.604023f, -0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.116978f, -0.321394f, -0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.000000f, -0.342020f,  0.939693f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.000000f, -0.642788f,  0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.000000f, -0.866025f,  0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.000000f, -0.984807f, -0.173648f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.000000f, -0.866025f, -0.500000f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.000000f, -0.642788f, -0.766044f, 1.0f), bb::vec2(.0f, .0f) },
	{ bb::vec4( 0.000000f, -0.342020f, -0.939693f, 1.0f), bb::vec2(.0f, .0f) },
};

static const uint16_t g_SphereIndices[] = {
	FACE4(6, 5, 13, 14),
	FACE4(3, 2, 10, 11),
	FACE4(7, 6, 14, 15),
	FACE4(4, 3, 11, 12),
	FACE4(8, 7, 15, 16),
	FACE4(5, 4, 12, 13),
	FACE4(9, 8, 16, 17),
	FACE4(12, 11, 19, 20),
	FACE4(16, 15, 23, 24),
	FACE4(13, 12, 20, 21),
	FACE4(17, 16, 24, 25),
	FACE4(14, 13, 21, 22),
	FACE4(11, 10, 18, 19),
	FACE4(15, 14, 22, 23),
	FACE4(25, 24, 32, 33),
	FACE4(22, 21, 29, 30),
	FACE4(19, 18, 26, 27),
	FACE4(23, 22, 30, 31),
	FACE4(20, 19, 27, 28),
	FACE4(24, 23, 31, 32),
	FACE4(21, 20, 28, 29),
	FACE4(31, 30, 38, 39),
	FACE4(28, 27, 35, 36),
	FACE4(32, 31, 39, 40),
	FACE4(29, 28, 36, 37),
	FACE4(33, 32, 40, 41),
	FACE4(30, 29, 37, 38),
	FACE4(27, 26, 34, 35),
	FACE4(40, 39, 47, 48),
	FACE4(37, 36, 44, 45),
	FACE4(41, 40, 48, 49),
	FACE4(38, 37, 45, 46),
	FACE4(35, 34, 42, 43),
	FACE4(39, 38, 46, 47),
	FACE4(36, 35, 43, 44),
	FACE4(46, 45, 54, 55),
	FACE4(43, 42, 51, 52),
	FACE4(47, 46, 55, 56),
	FACE4(44, 43, 52, 53),
	FACE4(48, 47, 56, 57),
	FACE4(45, 44, 53, 54),
	FACE4(49, 48, 57, 58),
	FACE4(53, 52, 60, 61),
	FACE4(57, 56, 64, 65),
	FACE4(54, 53, 61, 62),
	FACE4(58, 57, 65, 66),
	FACE4(55, 54, 62, 63),
	FACE4(52, 51, 59, 60),
	FACE4(56, 55, 63, 64),
	FACE4(66, 65, 73, 74),
	FACE4(63, 62, 70, 71),
	FACE4(60, 59, 67, 68),
	FACE4(64, 63, 71, 72),
	FACE4(61, 60, 68, 69),
	FACE4(65, 64, 72, 73),
	FACE4(62, 61, 69, 70),
	FACE4(72, 71, 79, 80),
	FACE4(69, 68, 76, 77),
	FACE4(73, 72, 80, 81),
	FACE4(70, 69, 77, 78),
	FACE4(74, 73, 81, 82),
	FACE4(71, 70, 78, 79),
	FACE4(68, 67, 75, 76),
	FACE4(78, 77, 85, 86),
	FACE4(82, 81, 89, 90),
	FACE4(79, 78, 86, 87),
	FACE4(76, 75, 83, 84),
	FACE4(80, 79, 87, 88),
	FACE4(77, 76, 84, 85),
	FACE4(81, 80, 88, 89),
	FACE4(84, 83, 91, 92),
	FACE4(88, 87, 95, 96),
	FACE4(85, 84, 92, 93),
	FACE4(89, 88, 96, 97),
	FACE4(86, 85, 93, 94),
	FACE4(90, 89, 97, 98),
	FACE4(87, 86, 94, 95),
	FACE4(97, 96, 104, 105),
	FACE4(94, 93, 101, 102),
	FACE4(98, 97, 105, 106),
	FACE4(95, 94, 102, 103),
	FACE4(92, 91, 99, 100),
	FACE4(96, 95, 103, 104),
	FACE4(93, 92, 100, 101),
	FACE4(106, 105, 113, 114),
	FACE4(103, 102, 110, 111),
	FACE4(100, 99, 107, 108),
	FACE4(104, 103, 111, 112),
	FACE4(101, 100, 108, 109),
	FACE4(105, 104, 112, 113),
	FACE4(102, 101, 109, 110),
	FACE4(112, 111, 120, 121),
	FACE4(109, 108, 117, 118),
	FACE4(113, 112, 121, 122),
	FACE4(110, 109, 118, 119),
	FACE4(114, 113, 122, 123),
	FACE4(111, 110, 119, 120),
	FACE4(108, 107, 116, 117),
	FACE4(119, 118, 126, 127),
	FACE4(123, 122, 130, 131),
	FACE4(120, 119, 127, 128),
	FACE4(117, 116, 124, 125),
	FACE4(121, 120, 128, 129),
	FACE4(118, 117, 125, 126),
	FACE4(122, 121, 129, 130),
	FACE4(125, 124, 132, 133),
	FACE4(129, 128, 136, 137),
	FACE4(126, 125, 133, 134),
	FACE4(130, 129, 137, 138),
	FACE4(127, 126, 134, 135),
	FACE4(131, 130, 138, 139),
	FACE4(128, 127, 135, 136),
	FACE4(138, 137, 144, 145),
	FACE4(139, 138, 145, 146),
	FACE4(133, 132, 140, 141),
	FACE4(137, 136, 143, 144),
	FACE4(134, 133, 141, 142),
	FACE4(145, 144, 7, 8),
	FACE4(1, 142, 4, 5),
	FACE3(140, 50, 2),
	FACE4(146, 145, 8, 9),
	FACE4(143, 1, 5, 6),
	FACE4(141, 140, 2, 3),
	FACE3(115, 146, 9),
	FACE4(144, 143, 6, 7),
	FACE4(142, 141, 3, 4),
	FACE3(115, 9, 17),
	FACE3(2, 50, 10),
	FACE3(10, 50, 18),
	FACE3(115, 17, 25),
	FACE3(18, 50, 26),
	FACE3(115, 25, 33),
	FACE3(115, 33, 41),
	FACE3(26, 50, 34),
	FACE3(34, 50, 42),
	FACE3(115, 41, 49),
	FACE3(115, 49, 58),
	FACE3(42, 50, 51),
	FACE3(51, 50, 59),
	FACE3(115, 58, 66),
	FACE3(59, 50, 67),
	FACE3(115, 66, 74),
	FACE3(67, 50, 75),
	FACE3(115, 74, 82),
	FACE3(75, 50, 83),
	FACE3(115, 82, 90),
	FACE3(115, 90, 98),
	FACE3(83, 50, 91),
	FACE3(91, 50, 99),
	FACE3(115, 98, 106),
	FACE3(115, 106, 114),
	FACE3(99, 50, 107),
	FACE3(107, 50, 116),
	FACE3(115, 114, 123),
	FACE3(116, 50, 124),
	FACE3(115, 123, 131),
	FACE3(115, 131, 139),
	FACE3(124, 50, 132),
	FACE4(135, 134, 142, 1),
	FACE3(132, 50, 140),
	FACE4(136, 135, 1, 143),
	FACE3(115, 139, 146),
};