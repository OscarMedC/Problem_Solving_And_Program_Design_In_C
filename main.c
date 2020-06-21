/*
*	Programmer: Oscar Olsson	Date completed: 21/06-20
*
*	Stores the values 'x' and 76.1 in seperate memory cells, then displays them.
*/
#include <stdio.h>

int main() {
	
	char c = 'X';
	double a = 76.1;

	printf("%c %0.1lf", c, a);

	return 0;
} 