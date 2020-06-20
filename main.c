#include <stdio.h>


int main() {

	char character_one, character_two;

	printf("Input two characters> ");
	scanf_s("%c%c", &character_one, 1, &character_two, 1);
	printf("\nCharacter one: %c, character two: %c\n", character_one, character_two);

	int n = 15;

	printf("The value of n is %d.\n", n);

	double side = 5.0;
	double area = 25.0;

	printf("The area of a square whose side length is %lfcm is %lf square km.\n", side, area);

	int length = 0;
	int breadth = 0;
	int perimeter = 0;

	printf("Enter the length and breadth of the rectangle: ");
	scanf_s("%d%d", &length, &breadth);
	printf("The perimeter of the rectangle = %d \n", length * breadth);

	return 0;
} 