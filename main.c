/*
*	Programmer: Oscar Olsson	Date completed: 26/06-20
*	Perpendicular Bisector Calculator
*/
#include <stdio.h>


int main() {

	double x1_cord = 0.0;
	double y1_cord = 0.0;
	
	double x2_cord = 0.0;
	double y2_cord = 0.0;

	double slope = 0.0;
	double x_mid = 0.0;
	double y_mid = 0.0;
	double bisector_slope = 0.0;
	double b = 0.0;

	printf("\nEnter x1 cord > ");
	scanf_s("%lf", &x1_cord);
	printf("\nEnter y1 cord > ");
	scanf_s("%lf", &y1_cord);

	printf("\nEnter x2 cord > ");
	scanf_s("%lf", &x2_cord);
	printf("\nEnter y2 cord > ");
	scanf_s("%lf", &y2_cord);

	slope = (y2_cord - y1_cord) / (x2_cord - x1_cord);
	x_mid = (x1_cord + x2_cord) / 2;
	y_mid = (y1_cord + y2_cord) / 2;
	bisector_slope = -1 * slope;
	b = y_mid - bisector_slope * x_mid;

	printf("\n Equation of the perpendicular bisector -\n Y = %.1lfX + %.1lf \n", bisector_slope, b);

	return 0;
} 