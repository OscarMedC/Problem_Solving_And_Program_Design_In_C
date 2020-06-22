/*
*	Programmer: Oscar Olsson	Date completed: 22/06-20
*	Program that calculates the taxi fare 
*/
#include <stdio.h>
#define FARE_RATE 1.5 // Taxi fare rate at in dollars

int main() {

	double miles = 0.0; // User input, distance in miles
	double fare = 0.0; // Output, totalt cost

	printf("Taxi fare calculator\n");
	printf("Enter the distance travelled in miles: ");
	scanf_s("%lf", &miles);

	fare = miles * FARE_RATE;

	printf("Your fare is $%.1lf.\n", fare);

	return 0;
} 