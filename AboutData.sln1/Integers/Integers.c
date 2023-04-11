/*
Written by M.J.Hong

Starting date 23.04.09
Last update 23.04.09

Contents : Integers , Octal& Hexadecimal
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void integers();
void numbers();

int main()
{
	integers();
	numbers();

	return 0;
}


void integers()
{
	char c = 65;
	short s = 200;
	unsigned int ui = 3000000000U;	//3'000'000'000U
	long l = 65537L;
	long long ll = 12345678987654LL;	//12'345'678'987'654LL

	printf("char = %hhd, %d, %c\n", c, c, c);
	printf("short = %hhd, %hd, %d\n", s, s, s);	//eg for overflow
	printf("unsigned int = %u, %d\n", ui, ui);
	printf("long = %ld, %hd\n", l, l);
	printf("long long = %lld, %ld,\n", ll, ll);

}
void numbers()
{
	unsigned int decimal = 4294967295;
	unsigned int binary = 0b11111111111111111111111111111111;
	unsigned int oct = 037777777777;	//prefix "0"
	unsigned int hex = 0xffffffff;	//prefix "0x" or "0X"

	printf("%u\n", decimal);
	printf("%u\n", binary);
	printf("%u\n", oct);
	printf("%u\n", hex);

	printf("%o,%x,%#o,%#X", decimal, decimal, decimal, decimal);	//decimal to octal or hexadecimal

}


