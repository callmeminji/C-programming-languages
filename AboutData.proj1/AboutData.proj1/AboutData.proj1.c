/*
Written by M.J.Hong

Starting date 23.04.04
Last update 23.04.04

*/
//#definition_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void inout();

int main()
{
	int i = 0;
	
	scanf("%d", &i);	//&:ampersand

	printf("value is %d\n", i);
	
	inout();
	return 0;
}


void inout()
{
	int i = 0, j = 0;
	int sum = 0;

	printf("Input Two integers\n");

	scanf("%d%d", &i, &j);
	sum = i + j;

	printf("%d plus %d=%d", i, j, sum);
}
