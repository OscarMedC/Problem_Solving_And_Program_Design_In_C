/*
*	Programmer: Oscar Olsson	Date completed: 26/06-20
*	Calculates the acceleration of a jet fighter
*/
#include <stdio.h>


int main() {

	double take_off_speed = 0.0;
	double catapult_distance = 0.0;
	double acceleration = 0.0;
	double time = 0.0;

	printf("\nEnter the take off speed (km/hr) > ");
	scanf_s("%lf", &take_off_speed);

	printf("\nEnter the catapult distance > ");
	scanf_s("%lf", &catapult_distance);

	time = (2 * catapult_distance) / take_off_speed;
	acceleration = take_off_speed / time;

	printf("\nThe time it takes for a jet to accelerate to its take off speed is %2.2lfs", time);
	printf("\nThe acceleration of the jet is %.2lfm/s^2", acceleration);

	return 0;
} 