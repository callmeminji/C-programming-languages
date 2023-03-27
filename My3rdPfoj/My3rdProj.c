/*
Written by M.J.Hong
*/

#include <stdio.h>


void say_love(void);	//prototyping,function declaration
int	test_debug(void); 
void test_order();

int main()
{
	int x, y, z;
	x = 1;
	y = 90;
	z = x * y;

		printf("%i\n", z);	//1

	test_debug();	//2
	
	say_love();	//3

	test_order();	//4

	return 0;
}

void say_love(void)	//function definition 
{
	printf("\nlove ya!\n"); //2-2,3-1

	return; //	can be ommited
}

int	test_debug(void)
{
	int x = 1;
	x = 11;

		printf("%i+%i", x, 3);	//2-1

	say_love();	//2-2

	return 9;

}

void test_order()
{
	int l, i, k, e;
	
	l = 1, i = 0, k = 0, e = 9;

		printf("%i%i%i%i", l, i, k, e);	//4-1
	
	printf("\n\"Can i finish thiss test?\"");	//4-2
	
}

