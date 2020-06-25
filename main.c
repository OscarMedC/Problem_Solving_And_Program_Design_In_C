/*
*	Programmer: Oscar Olsson	Date completed: 24/06-20
*	Calculates the amount of water and money saved on toilts
*/
#include <stdio.h>
#include <math.h>

#define OLD_FLUSH 15	// Constant, liter of water per flush with old toilets
#define NEW_FLUSH  2	// Constant, liter of water per flush with new toilets
#define FLUSHES_PER_DAY 14		// Constant, flushes per day on each toilet
#define NEW_TOILETS_COST 150	// Constant, cost of each new toilet

int main() {

	int nr_of_people = 0;	// User input, the amount of persons using the toilets
	int nr_of_toilets = 0;	// User input, the amount of toilets
	int liters_per_day = 0;	// Program output, total liters used per day
	int total_cost = 0;		// Program output, total cost of the new toilets

	printf("Enter the communitys populace > ");
	scanf_s("%d", &nr_of_people);

	nr_of_toilets = round((double)nr_of_people / 3);

	liters_per_day = (nr_of_toilets * OLD_FLUSH * FLUSHES_PER_DAY) - (nr_of_toilets * NEW_FLUSH * FLUSHES_PER_DAY);

	printf("%d Liters of water will be saved each day\n", liters_per_day);

	total_cost = nr_of_toilets * NEW_TOILETS_COST;

	printf("\nThe total cost of the water saved is $%d.\n", total_cost);

	return 0;
} 