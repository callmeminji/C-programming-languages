/*
Written by M.J.Hong

Starting date 23.04.10
Last update 23.04.10

Contents : Fixed_width_integers
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>	// also included in inttypes.h
#include <inttypes.h>


int main()
{
	int i;
	int32_t i32; //32 bit integer
	int_least8_t i8;	//smallest 8bit (similar to signed char)
	int_fast8_t f8;	//fastest minimum
	intmax_t imax;	//biggest signed integers
	uintmax_t uimax;	//biggest unsigned integers

	i32 = 1004;

	printf("me32=%d\n", i32);
	printf("me32=%""d""\n", i32);
	printf("me32=%" PRId32 "\n", i32);	//if idk format specifier



	return 0;
}














}
