/*
* Written by M.J.Hong
*/

#include <stdio.h>

int main(void)
{
	int x;	//variable declaration
	int y;
	int sum;

	x = 1;	//assignment
	y = 2;
	sum = x + y;	//operation

		printf("The answer is %i",sum);

	int a = 4, b = 5;	//initialization
	int d = a * b;

		printf("\n%i * %i = %i", a, b, d);
		printf("\npractice using %i,%i",0, a + b);

	printf("\n\"The truth is... \nI am Ironman.\"");	//escape sequence (\n)

	printf("\a");	//bell

	return 0;
}