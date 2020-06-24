/*
*	Programmer: Oscar Olsson	Date completed: 24/06-20
*	Predicts the score needed on the final exam to achieva a desired grade
*/
#include <stdio.h>

int main() {

	char desired_grade = ' ';	// Problem input, desired grade
	double min_avg = 0.0;
	double curr_avg = 0.0;
	double final_percent = 0.0;
	double score_req = 0.0;

	printf("\nEnter desired grade> ");
	scanf_s("%c", &desired_grade, 1);
	
	printf("Enter the minium average required> ");
	scanf_s("%lf", &min_avg);

	printf("Enter the current average in course> ");
	scanf_s("%lf", &curr_avg);

	printf("Enter how much the final counts as a percentage of the course grade> ");
	scanf_s("%lf", &final_percent);

	score_req = ((min_avg - curr_avg) * (100 / (double)final_percent)) + curr_avg;

	printf("\nYou need a score of %.2lf on the final to get a %c.\n", score_req, desired_grade);

	return 0;
} 