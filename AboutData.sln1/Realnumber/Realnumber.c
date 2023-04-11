/*
Written by M.J.Hong

Starting date 23.04.10
Last update 23.04.10

Contents : Real number
*/

#include <stdio.h>
#include <float.h>
#include <math.h>

void limit();

int main()
{
	printf("%u\n", sizeof(float));
	printf("%u\n", sizeof(double));
	printf("%u\n", sizeof(long double));

	float f = 123.456f;
	double d = 123.456;

	float f2 = 123.456f;
	double d2 = 123.456;

	int i = 3;
	float f3 = 3.f;	//3.0f
	double d3 = 3.;	//3.0

	float f4 = 1.234e10f;	//e,E
	float f5 = 0x1.1p1; //0xb.ap1
	double d5 = 1.0625e0;

	printf("%f %F %e %E\n", f, f, f, f);
	printf("%f %F %e %E\n", d, d, d, d);
	printf("%a %A\n", f5, f5);
	printf("%a %A\n", d5, d5);

	limit();

	return 0;
}


void limit()
{
	float a, b;
	a = 1000.0f + 1.0f;
	b = a - 1000.0f;
	printf("%f\n", b);

	//round-off errors (ex1)

	a = 1.0E20f + 1.0f;
	b = a - 1.0E20f;
	printf("%f\n", b);	

	//round-off errors(ex2)

	float c = 0.0f;

	c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f;
	c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f;
	c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f;
	c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f;
	c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f;
	c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f;
	c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f;
	c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f;
	c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f;
	c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f; c = c + 0.01f;
	
	//overflow 

	printf("%f\n", a);	

	float max = 3.402823466e+38F;	// go to definition
	printf("%f\n", max);

	max = max * 100.0f;
	printf("%f\n", max);	

	//underflow 

	float f = 1.401298464e-45F;	//True min
	printf("%e\n", f);

	f = f / 100.0f;
	printf("%e\n", f);	//subnormal

	f = f / 0.0f;
	printf("%e\n", f);


	//-nan

	float f2 = asinf(1.0f);
	printf("%f\n", f2);

	float f3 = asinf(2.0f);
	printf("%f\n", f3);

}
