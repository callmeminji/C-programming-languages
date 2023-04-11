/*
Written by M.J.Hong

Starting date 23.04.10
Last update 23.04.10

Contents : Ascll table
*/

#include <stdio.h>


int main()
{
	char c = 'A';	//''
	char d = 65;	//d='A'

	printf("%c %hhd\n", c, c);
	printf("%c %hhd\n", d, d);

	printf("%c\n", c + 1);

	char a = '\a';	// \(backslash) : escape sequence
	printf("%c", a);
	//printf("\07")	*oct
	//printf("\x7") *hex

	float salary;
	printf("$______\n");
	printf("$______\b\b\b\b\b\b");	// \b :backspace
	scanf("%f", &salary);

	printf("It's %f\n", salary);

	printf("AB\tCDEF\n");	// \t : tab
	printf("ABX\tDEF\n");

	printf(" \\ \'test\' \"Hello\" \?\n");

	return 0;

}