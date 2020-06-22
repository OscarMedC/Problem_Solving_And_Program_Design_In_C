/*
*	Programmer: Oscar Olsson	Date completed: 22/06-20
*	Program that calculates the amount of power produced 
*/
#include <stdio.h>
#define G_CONST 9.80 // The gravitational constant 9.80m/s^2
#define ELECTRIC_E 0.90 // The electrical effiency 90%

int main() {

	double damHeight = 0.0; // User input, height of the dam in meters
	double cubicMeters = 0.0; // User input, cubic meter of water per second
	double mass = 0.0; // The mass of the water, 1m^3 = 1000kg
	double work = 0.0; // The amount of energy created 

	printf("Power Production Calculator\n");
	printf("Enter the dams height> ");
	scanf_s("%lf", &damHeight);
	printf("Enter the amount of cubic meters of water> ");
	scanf_s("%lf", &cubicMeters);

	mass = cubicMeters * 1000;
	work = (mass * G_CONST * damHeight) * ELECTRIC_E;

	printf("The amount of power produced is %.2lfMW\n", work / 1000000 );

	return 0;
} 