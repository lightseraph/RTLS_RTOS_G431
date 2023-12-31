#include "fonts.h"

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wincompatible-pointer-types"
#endif

// 字模生成设置：逐行，顺向
// 中文字模是行列式
// 字体：Hack

const uint8_t Font7x10[95][10] = {

};

/****************************************8*16�ĵ���************************************/
const uint8_t Font8x16[95][16] =
	{

};

const uint16_t Font7x14[103][14] =
	{
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*" ",32*/
		{0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00}, /*"!",33*/
		{0x00, 0x00, 0x28, 0x28, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*""",34*/
		{0x00, 0x00, 0x14, 0x14, 0x24, 0x7E, 0x28, 0x28, 0xFC, 0x48, 0x50, 0x00, 0x00, 0x00}, /*"#",35*/
		{0x00, 0x10, 0x38, 0x54, 0x50, 0x50, 0x38, 0x14, 0x14, 0x54, 0x78, 0x10, 0x10, 0x00}, /*"$",36*/
		{0x00, 0x00, 0x60, 0x90, 0x90, 0x66, 0x38, 0xCC, 0x12, 0x12, 0x0C, 0x00, 0x00, 0x00}, /*"%",37*/
		{0x00, 0x00, 0x38, 0x40, 0x40, 0x20, 0x52, 0x8A, 0x8C, 0x44, 0x3E, 0x00, 0x00, 0x00}, /*"&",38*/
		{0x00, 0x00, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"'",39*/
		{0x00, 0x10, 0x10, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x10, 0x10, 0x00, 0x00}, /*"(",40*/
		{0x00, 0x10, 0x10, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x10, 0x10, 0x00, 0x00}, /*")",41*/
		{0x00, 0x00, 0x10, 0x10, 0x7C, 0x10, 0x28, 0x4C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"*",42*/
		{0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0xFE, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00}, /*"+",43*/
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x18, 0x08, 0x10, 0x20}, /*",",44*/
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"-",45*/
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00}, /*".",46*/
		{0x00, 0x00, 0x04, 0x08, 0x08, 0x18, 0x10, 0x10, 0x20, 0x20, 0x40, 0x40, 0x00, 0x00}, /*"/",47*/
		{0x00, 0x00, 0x38, 0x44, 0x54, 0x54, 0x54, 0x54, 0x54, 0x44, 0x38, 0x00, 0x00, 0x00}, /*"0",48*/
		{0x00, 0x00, 0x10, 0x30, 0x70, 0x10, 0x10, 0x10, 0x10, 0x10, 0x3C, 0x00, 0x00, 0x00}, /*"1",49*/
		{0x00, 0x00, 0x78, 0x4C, 0x04, 0x04, 0x08, 0x10, 0x30, 0x60, 0x7C, 0x00, 0x00, 0x00}, /*"2",50*/
		{0x00, 0x00, 0x78, 0x04, 0x04, 0x38, 0x04, 0x04, 0x04, 0x44, 0x78, 0x00, 0x00, 0x00}, /*"3",51*/
		{0x00, 0x00, 0x08, 0x18, 0x28, 0x28, 0x48, 0x48, 0x7C, 0x08, 0x08, 0x00, 0x00, 0x00}, /*"4",52*/
		{0x00, 0x00, 0x78, 0x40, 0x40, 0x78, 0x0C, 0x04, 0x04, 0x4C, 0x78, 0x00, 0x00, 0x00}, /*"5",53*/
		{0x00, 0x00, 0x3C, 0x60, 0x40, 0x78, 0x44, 0x44, 0x44, 0x44, 0x38, 0x00, 0x00, 0x00}, /*"6",54*/
		{0x00, 0x00, 0x7C, 0x04, 0x08, 0x08, 0x08, 0x10, 0x10, 0x30, 0x20, 0x00, 0x00, 0x00}, /*"7",55*/
		{0x00, 0x00, 0x38, 0x44, 0x44, 0x44, 0x38, 0x44, 0x44, 0x44, 0x38, 0x00, 0x00, 0x00}, /*"8",56*/
		{0x00, 0x00, 0x38, 0x44, 0x44, 0x44, 0x44, 0x3C, 0x04, 0x0C, 0x78, 0x00, 0x00, 0x00}, /*"9",57*/
		{0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00}, /*":",58*/
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x10, 0x00, 0x00, 0x10, 0x18, 0x08, 0x10, 0x20}, /*";",59*/
		{0x00, 0x00, 0x00, 0x00, 0x06, 0x1C, 0x60, 0xE0, 0x18, 0x06, 0x00, 0x00, 0x00, 0x00}, /*"<",60*/
		{0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"=",61*/
		{0x00, 0x00, 0x00, 0x00, 0xC0, 0x70, 0x0C, 0x0E, 0x30, 0xC0, 0x00, 0x00, 0x00, 0x00}, /*">",62*/
		{0x00, 0x00, 0x38, 0x44, 0x04, 0x08, 0x10, 0x10, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00}, /*"?",63*/
		{0x00, 0x00, 0x3C, 0x44, 0x42, 0x9E, 0xA2, 0xA2, 0xB2, 0x9E, 0x40, 0x60, 0x1C, 0x00}, /*"@",64*/
		{0x00, 0x00, 0x10, 0x28, 0x28, 0x28, 0x68, 0x44, 0x7C, 0x44, 0xC6, 0x00, 0x00, 0x00}, /*"A",65*/
		{0x00, 0x00, 0x78, 0x44, 0x44, 0x44, 0x78, 0x44, 0x44, 0x44, 0x7C, 0x00, 0x00, 0x00}, /*"B",66*/
		{0x00, 0x00, 0x3C, 0x64, 0x40, 0x40, 0x40, 0x40, 0x40, 0x64, 0x3C, 0x00, 0x00, 0x00}, /*"C",67*/
		{0x00, 0x00, 0x78, 0x4C, 0x44, 0x44, 0x44, 0x44, 0x44, 0x4C, 0x78, 0x00, 0x00, 0x00}, /*"D",68*/
		{0x00, 0x00, 0x7C, 0x40, 0x40, 0x40, 0x7C, 0x40, 0x40, 0x40, 0x7C, 0x00, 0x00, 0x00}, /*"E",69*/
		{0x00, 0x00, 0x7C, 0x40, 0x40, 0x40, 0x7C, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00}, /*"F",70*/
		{0x00, 0x00, 0x3C, 0x64, 0x40, 0x40, 0x4C, 0x44, 0x44, 0x64, 0x3C, 0x00, 0x00, 0x00}, /*"G",71*/
		{0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x7C, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00}, /*"H",72*/
		{0x00, 0x00, 0x7C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x7C, 0x00, 0x00, 0x00}, /*"I",73*/
		{0x00, 0x00, 0x38, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x48, 0x78, 0x00, 0x00, 0x00}, /*"J",74*/
		{0x00, 0x00, 0x46, 0x4C, 0x58, 0x70, 0x70, 0x58, 0x48, 0x44, 0x46, 0x00, 0x00, 0x00}, /*"K",75*/
		{0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7C, 0x00, 0x00, 0x00}, /*"L",76*/
		{0x00, 0x00, 0xC6, 0xCE, 0xEE, 0xEE, 0xD6, 0xD6, 0xC6, 0xC6, 0xC6, 0x00, 0x00, 0x00}, /*"M",77*/
		{0x00, 0x00, 0x44, 0x64, 0x64, 0x54, 0x54, 0x54, 0x4C, 0x4C, 0x44, 0x00, 0x00, 0x00}, /*"N",78*/
		{0x00, 0x00, 0x38, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x38, 0x00, 0x00, 0x00}, /*"O",79*/
		{0x00, 0x00, 0x78, 0x44, 0x44, 0x44, 0x78, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00}, /*"P",80*/
		{0x00, 0x00, 0x38, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x38, 0x08, 0x06, 0x00}, /*"Q",81*/
		{0x00, 0x00, 0x78, 0x44, 0x44, 0x44, 0x78, 0x48, 0x44, 0x44, 0x42, 0x00, 0x00, 0x00}, /*"R",82*/
		{0x00, 0x00, 0x3C, 0x44, 0x40, 0x60, 0x38, 0x04, 0x04, 0x44, 0x78, 0x00, 0x00, 0x00}, /*"S",83*/
		{0x00, 0x00, 0xFE, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00}, /*"T",84*/
		{0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x38, 0x00, 0x00, 0x00}, /*"U",85*/
		{0x00, 0x00, 0xC6, 0x44, 0x44, 0x44, 0x28, 0x28, 0x28, 0x28, 0x10, 0x00, 0x00, 0x00}, /*"V",86*/
		{0x00, 0x00, 0x82, 0x82, 0x92, 0xD6, 0x6C, 0x6C, 0x6C, 0x6C, 0x44, 0x00, 0x00, 0x00}, /*"W",87*/
		{0x00, 0x00, 0xC6, 0x64, 0x28, 0x18, 0x10, 0x28, 0x28, 0x44, 0xC6, 0x00, 0x00, 0x00}, /*"X",88*/
		{0x00, 0x00, 0xC6, 0x44, 0x28, 0x28, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00}, /*"Y",89*/
		{0x00, 0x00, 0x7C, 0x04, 0x08, 0x18, 0x10, 0x20, 0x20, 0x40, 0x7C, 0x00, 0x00, 0x00}, /*"Z",90*/
		{0x00, 0x38, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x38, 0x00}, /*"[",91*/
		{0x00, 0x00, 0x40, 0x40, 0x20, 0x20, 0x10, 0x10, 0x08, 0x08, 0x04, 0x04, 0x00, 0x00}, /*"\",92*/
		{0x00, 0x38, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x38, 0x00}, /*"]",93*/
		{0x00, 0x10, 0x38, 0x28, 0xC6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"^",94*/
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00}, /*"_",95*/
		{0x20, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"`",96*/
		{0x00, 0x00, 0x00, 0x00, 0x78, 0x04, 0x3C, 0x44, 0x44, 0x4C, 0x34, 0x00, 0x00, 0x00}, /*"a",97*/
		{0x00, 0x40, 0x40, 0x40, 0x58, 0x64, 0x44, 0x44, 0x44, 0x64, 0x58, 0x00, 0x00, 0x00}, /*"b",98*/
		{0x00, 0x00, 0x00, 0x00, 0x3C, 0x64, 0x40, 0x40, 0x40, 0x64, 0x3C, 0x00, 0x00, 0x00}, /*"c",99*/
		{0x00, 0x04, 0x04, 0x04, 0x34, 0x4C, 0x44, 0x44, 0x44, 0x4C, 0x34, 0x00, 0x00, 0x00}, /*"d",100*/
		{0x00, 0x00, 0x00, 0x00, 0x38, 0x44, 0x44, 0x7C, 0x40, 0x44, 0x3C, 0x00, 0x00, 0x00}, /*"e",101*/
		{0x00, 0x1C, 0x10, 0x10, 0x7C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00}, /*"f",102*/
		{0x00, 0x00, 0x00, 0x00, 0x3C, 0x44, 0x44, 0x44, 0x44, 0x44, 0x3C, 0x04, 0x44, 0x38}, /*"g",103*/
		{0x00, 0x40, 0x40, 0x40, 0x58, 0x64, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00}, /*"h",104*/
		{0x00, 0x10, 0x00, 0x00, 0x30, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0C, 0x00, 0x00, 0x00}, /*"i",105*/
		{0x00, 0x08, 0x00, 0x00, 0x38, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x70}, /*"j",106*/
		{0x00, 0x40, 0x40, 0x40, 0x44, 0x48, 0x50, 0x70, 0x48, 0x44, 0x46, 0x00, 0x00, 0x00}, /*"k",107*/
		{0x00, 0x70, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1C, 0x00, 0x00, 0x00}, /*"l",108*/
		{0x00, 0x00, 0x00, 0x00, 0x7C, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54, 0x00, 0x00, 0x00}, /*"m",109*/
		{0x00, 0x00, 0x00, 0x00, 0x58, 0x64, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00}, /*"n",110*/
		{0x00, 0x00, 0x00, 0x00, 0x38, 0x44, 0x44, 0x44, 0x44, 0x44, 0x38, 0x00, 0x00, 0x00}, /*"o",111*/
		{0x00, 0x00, 0x00, 0x00, 0x58, 0x64, 0x44, 0x44, 0x44, 0x64, 0x58, 0x40, 0x40, 0x40}, /*"p",112*/
		{0x00, 0x00, 0x00, 0x00, 0x3C, 0x4C, 0x44, 0x44, 0x44, 0x4C, 0x3C, 0x04, 0x04, 0x04}, /*"q",113*/
		{0x00, 0x00, 0x00, 0x00, 0x3C, 0x24, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00}, /*"r",114*/
		{0x00, 0x00, 0x00, 0x00, 0x3C, 0x44, 0x40, 0x38, 0x04, 0x44, 0x78, 0x00, 0x00, 0x00}, /*"s",115*/
		{0x00, 0x00, 0x20, 0x20, 0x7C, 0x20, 0x20, 0x20, 0x20, 0x30, 0x1C, 0x00, 0x00, 0x00}, /*"t",116*/
		{0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x4C, 0x34, 0x00, 0x00, 0x00}, /*"u",117*/
		{0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x28, 0x28, 0x28, 0x10, 0x00, 0x00, 0x00}, /*"v",118*/
		{0x00, 0x00, 0x00, 0x00, 0x82, 0x82, 0x54, 0x54, 0x6C, 0x6C, 0x6C, 0x00, 0x00, 0x00}, /*"w",119*/
		{0x00, 0x00, 0x00, 0x00, 0x44, 0x28, 0x28, 0x10, 0x28, 0x6C, 0xC6, 0x00, 0x00, 0x00}, /*"x",120*/
		{0x00, 0x00, 0x00, 0x00, 0x46, 0x44, 0x64, 0x28, 0x28, 0x38, 0x10, 0x10, 0x10, 0x60}, /*"y",121*/
		{0x00, 0x00, 0x00, 0x00, 0x7C, 0x0C, 0x08, 0x10, 0x20, 0x60, 0x7C, 0x00, 0x00, 0x00}, /*"z",122*/
		{0x00, 0x1C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x60, 0x10, 0x10, 0x10, 0x10, 0x1C, 0x00}, /*"{",123*/
		{0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10}, /*"|",124*/
		{0x00, 0x70, 0x10, 0x10, 0x10, 0x10, 0x18, 0x0C, 0x10, 0x10, 0x10, 0x10, 0x70, 0x00}, /*"}",125*/
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x62, 0x54, 0x8C, 0x00, 0x00, 0x00, 0x00, 0x00}, /*"~",126*/

		{0x10, 0x08, 0x09, 0x49, 0x4A, 0x4C, 0x48, 0x4B, 0x4A, 0x0A, 0x12, 0x13, 0x00, 0x00},
		{0x80, 0x80, 0x10, 0xE0, 0x00, 0x40, 0x00, 0xF8, 0x58, 0x90, 0x90, 0x60, 0x00, 0x00}, /*"临",0*/
		{0x2F, 0x12, 0x1F, 0x12, 0x1F, 0x0C, 0x08, 0x18, 0x28, 0xC8, 0x08, 0x10, 0x20, 0x00},
		{0xE0, 0x20, 0xC0, 0x40, 0x80, 0x80, 0x40, 0xB0, 0x88, 0x80, 0x80, 0x80, 0x80, 0x00}, /*"界",1*/
		{0x00, 0x1F, 0x11, 0x11, 0x11, 0x15, 0x12, 0x23, 0x25, 0x28, 0x50, 0x80, 0x00, 0x00},
		{0xE0, 0x20, 0x40, 0xC0, 0x40, 0x40, 0x40, 0x40, 0xC0, 0xA4, 0x34, 0x1C, 0x00, 0x00}, /*"风",2*/
		{0x08, 0x10, 0x20, 0x48, 0x10, 0x17, 0x30, 0x50, 0x90, 0x10, 0x10, 0x10, 0x00, 0x00},
		{0x00, 0x70, 0x80, 0x00, 0x3C, 0xC0, 0x40, 0x40, 0x40, 0x40, 0x40, 0xC0, 0x40, 0x00}, /*"行",3*/
};

FontDef_t Font_7x10 = {
	7,
	10,
	Font7x10};

FontDef_t Font_8x16 = {
	8,
	16,
	Font8x16};

FontDef_t Font_7x14 = {
	7,
	14,
	Font7x14};

char *FONTS_GetStringSize(char *str, FONTS_SIZE_t *SizeStruct, FontDef_t *Font)
{
	/* Fill settings */
	SizeStruct->Height = Font->FontHeight;
	SizeStruct->Length = Font->FontWidth * strlen(str);

	/* Return pointer */
	return str;
}
