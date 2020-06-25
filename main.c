/*
*	Programmer: Oscar Olsson	Date completed: 24/06-20
*	Calculates the amount BTU of heat delievered to a house
*/
#include <stdio.h>

#define ENERGY_PER_GALLON 5800000.0 / 42.0	// Constant, BTU per gallon of oil

int main() {

	int gallons = 0;	// User input, amount of oil to be burned 
	double energy_efficiency = 0.0;		// User input, efficiency of the oil furnace in percent
	double energy = 0.0;	// Program output, amount BTUs of heat created

	printf("\nEnter the amount of oil being burned (Gallons) > ");
	scanf_s("%d", &gallons);

	printf("\nEnter the thermal efficiency (in percent) > ");
	scanf_s("%lf", &energy_efficiency);

	energy = (double)gallons * ENERGY_PER_GALLON * energy_efficiency;

	printf("\n%.2lf BTUs of heat are delivered to the house.\n", energy);

	return 0;
} 