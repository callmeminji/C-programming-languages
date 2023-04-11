/*
Written by M.J.Hong


Starting date 23.04.11
Last update 23.04.11

Contents : Boolean Types,
*/

#include <stdio.h>
#include <stdbool.h>
#include <complex.h>

void Bool();
void Complex();

int main()
{
	Bool();
	Complex();
	
	return 0;
}



void Bool()
{
	printf("%u\n", sizeof(_Bool));	//1byte	

	_Bool b1;
	b1 = 0;	//false
	b1 = 1;	//true

	printf("%d\n", b1);

	bool b2, b3;
	b2 = true;
	b3 = false;

	printf("%d %d\n", b2, b3);

}

void Complex()
{
	_Dcomplex z;
	z._Val[0] = 1.0;
	z._Val[1] = 1.0;


}



