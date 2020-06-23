/*
*	Programmer: Oscar Olsson	Date completed: 22/06-20
*	Calculates the VTBI (volume to be infused)
*/
#include <stdio.h>

int main() {

	float volume = 0.0; // Problem input, amount of fluid in bad (ml)
	int minutes = 0; // Problem input, the number of minutes it should be infused (min)
	float rate = 0.0; // Problem output, rate in ml/hour which fluid should be infused

	printf("\nVolume to be infused (ml) => ");
	scanf_s("%f", &volume);

	printf("Minutes over which to infuse => ");
	scanf_s("%d", &minutes);

	rate = volume / ((float)minutes / 60);

	printf("\nVTBI: %.0f ml\n", volume);
	printf("Rate: %.0f ml\n", rate);

	return 0;
} 