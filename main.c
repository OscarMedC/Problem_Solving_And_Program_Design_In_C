/*
*	Programmer: Oscar Olsson	Date completed: 22/06-20
*	Converts US dollars to pounds sterling
*/
#include <stdio.h>

#define CONVERSION_RATE 0.636 // 1US$ == 0,636 Sterling

int main() {

	float dollar = 0.0; // Problem input, currency in US dollars
	float pounds = 0.0; // Problem output, currency in pounds sterling

	printf("\nEnter the amount of USD($) > ");
	scanf_s("%f", &dollar);

	pounds = dollar * (float)CONVERSION_RATE;

	printf("\n%.2fUSD($) = %.2f pounds sterling(£)\n", dollar, pounds);

	return 0;
} 