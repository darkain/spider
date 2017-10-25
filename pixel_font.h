#ifndef __PIXEL_FONT_H__
#define __PIXEL_FONT_H__



#include "defines.h"



struct PACKED character {
	byte width;
	byte data[5];
};




CONST character pixelfont[96] = {
	{1, { 23}},					// !		0x21
	{3, {  3,  0,  3}},			// "
	{5, { 10, 31, 10, 31, 10}},	// #
	{3, { 20, 51, 10}},			// $
	{4, { 18,  8,  4, 18}},		// %
	{4, { 26, 21, 10, 16}},		// &
	{1, {  3}},					// '
	{2, { 14, 17}},				// (

	{2, { 17, 14}},				// )		0x29
	{3, { 10,  4, 10}},			// *
	{3, {  4, 14,  4}},			// +
	{1, { 48}},					// ,
	{3, {  4,  4,  4}},			// -
	{1, { 16}},					// .
	{3, { 24,  4,  3}},			// /
	{3, { 14, 21, 14}},			// 0

	{3, { 18, 31, 16}},			// 1		0x31
	{3, { 26, 17, 22}},			// 2
	{3, { 17, 21, 10}},			// 3
	{3, { 14,  8, 31}},			// 4
	{3, { 23, 21,  9}},			// 5
	{3, { 14, 21,  9}},			// 6
	{3, {  1, 29,  3}},			// 7
	{3, { 10, 21, 10}},			// 8

	{3, { 18, 21, 14}},			// 9		0x39
	{1, { 20}},					// :
	{1, { 52}},					// ;
	{3, {  4, 10, 17}},			// <
	{3, { 10, 10, 10}},			// =
	{3, { 17, 10,  4}},			// >
	{3, {  1, 21,  2}},			// ?
	{4, { 14, 17, 21, 22}},		// @

	{3, { 30,  9, 30}},			// A		0x41
	{3, { 31, 21, 10}},			// B
	{3, { 14, 17, 18}},			// C
	{3, { 31, 17, 14}},			// D
	{3, { 31, 21, 17}},			// E
	{3, { 31,  5,  1}},			// F
	{3, { 14, 17, 29}},			// G
	{3, { 31,  4, 31}},			// H

	{3, { 17, 31, 17}},			// I		0x49
	{3, {  8, 16, 15}},			// J
	{3, { 31,  4, 27}},			// K
	{3, { 31, 16, 16}},			// L
	{5, { 30,  1, 30,  1, 30}},	// M
	{4, { 31,  2,  4, 31}},		// N
	{3, { 14, 17, 14}},			// O
	{3, { 31,  9,  6}},			// P

	{3, { 14, 17, 30}},			// Q		0x51
	{3, { 31,  9, 22}},			// R
	{3, { 18, 21,  9}},			// S
	{3, {  1, 31,  1}},			// T
	{3, { 15, 16, 31}},			// U
	{3, { 15, 16, 15}},			// V
	{5, { 15, 16, 15, 16, 15}},	// W
	{3, { 27,  4, 27}},			// X

	{3, {  7, 24,  7}},			// Y		0x59
	{3, { 25, 21, 19}},			// Z
	{2, { 31, 17}},				// [
	{3, {  3,  4, 24}},			// \ (EXTRA TEXT FOR C++ REASONS)
	{2, { 17, 31}},				// ]
	{3, {  2,  1,  2}},			// ^
	{3, { 16, 16, 16}},			// _
	{2, {  1,  2}},				// `

	{3, { 12, 18, 28}},			// a		0x61
	{3, { 31, 18, 12}},			// b
	{3, { 12, 18, 20}},			// c
	{3, { 12, 18, 31}},			// d
	{3, { 12, 26, 20}},			// e
	{3, {  4, 30,  5}},			// f
	{3, { 44, 34, 30}},			// g
	{3, { 31,  2, 28}},			// h

	{1, { 29}},					// i		0x69
	{2, { 32, 29}},				// j
	{3, { 31,  4, 26}},			// k
	{2, { 15, 16}},				// l
	{5, { 30,  2, 28,  2, 28}},	// m
	{3, { 30,  2, 28}},			// n
	{3, { 12, 18, 12}},			// o
	{3, { 60, 18, 12}},			// p

	{3, { 12, 18, 60}},			// q		0x71
	{3, { 28,  2,  4}},			// r
	{3, { 20, 18, 10}},			// s
	{2, { 15, 18}},				// t
	{3, { 14, 16, 30}},			// u
	{3, { 14, 16, 14}},			// v
	{5, { 14, 16, 14, 16, 14}},	// w
	{3, { 18, 12, 18}},			// x

	{3, { 14, 32, 30}},			// y		0x79
	{3, { 26, 18, 22}},			// z
	{3, {  4, 27, 17}},			// {
	{1, { 31}},					// |
	{3, { 17, 27,  4}},			// }
	{4, {  2,  1,  2,  1}},		// ~

	{5, { 6, 9, 18, 9,  6}},	// heart
};




#endif //__PIXEL_FONT_H__
