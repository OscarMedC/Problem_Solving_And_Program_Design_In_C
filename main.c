#include <stdio.h>


int main() {

	char character_one, character_two;

	printf("Input two characters> ");
	scanf_s("%c %c", &character_one, 1, &character_two, 1);
	printf("\nCharacter one: %c, character two: %c\n", character_one, character_two);

	return 0;
} 