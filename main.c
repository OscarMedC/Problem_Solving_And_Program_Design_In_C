/*
*	Programmer: Oscar Olsson	Date completed: 21/06-20
*	Implements the following equation avg = (1 - a)^2 + (oldavg - min) / (max - min) in C
*/
#include <stdio.h>

#define ALPHA 0.001

int main() {

	double avg = 0.0;
	double min = 0.0;
	double oldavg = 0.0;
	double max = 0.0;

	printf("Enter the old average, min and max value> ");
	scanf_s("%lf%lf%lf", &oldavg, &min, &max);

	avg = ((1 - ALPHA) * 2) + ((oldavg - min) / (max - min));

	printf("The average is %lf \n", avg);

	return 0;
} 