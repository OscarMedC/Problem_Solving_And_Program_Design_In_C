/*
*	Programmer: Oscar Olsson	Date completed: 22/06-20
*	Program that estimates the temperature in a freezer since a power failure
*/
#include <stdio.h>


int main() {

	int hours = 0;
	int minutes = 0;
	double time = 0.0;
	double temperature = 0.0;

	printf("\nEnter how long since the start of the power failure in hrs and minutes> ");
	scanf_s("%d%d", &hours, &minutes);

	time = (double)hours + (double)minutes / 60;

	temperature = ((4 * time * time) / (time + 2)) - 20;

	printf("The temperature in the fridge after %.2lf hours is %.2lf.\n", time, temperature);

	return 0;
} 