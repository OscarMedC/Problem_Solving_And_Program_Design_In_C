/*
*	Programmer: Oscar Olsson	Date completed: 21/06-20
*	Formatting numbers in C
*/
#include <stdio.h>

int main() {

	int a = 504;
	double b = 302.558;
	double c = -12.31;

	printf("%5d%11.2lf%9.1lf", a, b, c);

	return 0;
} 