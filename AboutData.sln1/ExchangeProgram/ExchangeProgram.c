/*
Written by M.J.Hong

Starting date 23.04.04
Last update 23.04.04

Exchange Program : Won to Dollars consider to exchange rate
*/

#include <stdio.h>


int main()
{
	float Won = 0.0f;
	float Dollar = 0.0f;
	
	printf("Input Won\n");

	scanf("%f", &Won);

	Dollar = Won * 0.00076f;

	printf("Dollar = %f", Dollar);

	return 0;
}