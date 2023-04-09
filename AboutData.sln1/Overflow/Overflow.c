/*
Written by M.J.Hong

Starting date 23.04.09
Last update 23.04.09

*/

#include <stdio.h>
#include <limits.h>	//Standard values for limits on resources (such as the maximum value for an object of type char)
#include <stdlib.h>

void overflow();

int main()
{
	unsigned int k = 0;

	printf("%u\n", sizeof(unsigned int));	//sizeof(); : represent memory size
	printf("%u\n", sizeof(k));

	unsigned int i = 0b11111111111111111111111111111111;	//i to binary representation (1x32)
	
	printf("%u\n", i);

	signed int i_max = INT_MAX;
	signed int i_min = INT_MIN; 
	unsigned int u_max = UINT_MAX;
	unsigned int u_min = 0;	// uint_min = 0
	
	printf("max of int=%d\n", i_max);
	printf("max of uint=%u\n", u_max);
	printf("min of int=%d\n", i_min);
	printf("min of uint=%u\n", u_min);

	printf(" Next step is overflow\n");

	overflow();

	return 0;
}

void overflow();


void overflow()
{
	unsigned int u_max = UINT_MAX + 1;
	printf("%u\n", u_max);

	
	unsigned int u_min = 0 - 1;
	printf("%u\n", u_min);

	char buffer[33];
	_itoa(u_max, buffer, 2);	//_itoa(); : To convert int to a string	 //To represent binary of "u_min" : u_max -> u_min 
	

	printf("decimal:%u\n", u_max);	//1111 + 1 = (1)0000
	printf("binary:%s\n", buffer);	// %s : strings

	printf("decimal:%u\n", u_min);	//(1)0000 - 1= = 1111 
	printf("binary:%s\n", buffer);

}
