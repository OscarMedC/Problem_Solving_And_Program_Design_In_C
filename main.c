/*
*	Programmer: Oscar Olsson	Date completed: 24/06-20
*	Calculates the amount of time it takes to mow the lawn
*/
#include <stdio.h>

#define TIME_TO_CUT 2.0		// Cuts 2 square meters per second

int main() {

	double yard_length = 0.0;	// User input, length of the yard
	double yard_width = 0.0;	// User input, width of the yard

	double house_length = 0.0;	// User input, length of the house
	double house_width = 0.0;	// User input, width of the house

	double house_area = 0.0;	// Area of the house
	double yard_area = 0.0;		// Area of the yard		

	printf("\nEnter the yards length and width > ");
	scanf_s("%lf %lf", &yard_length, &yard_width);

	printf("\nEnter the house length and width > ");
	scanf_s("%lf %lf", &house_length, &house_width);

	yard_area = yard_length * yard_width;
	house_area = house_length * house_width;

	yard_area = yard_area - house_area;

	printf("\nIt takes %.2lf seconds to cut a %.2lfsqm^2 big yard\n", yard_area / TIME_TO_CUT, yard_area);

	return 0;
} 