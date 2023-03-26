#include <stdio.h>

int main()
{
	char lowercase_letter, uppercase_letter;
	
	/* Accepting a lowercase letter from the user */
	printf("Enter a lowercase letter:");
	scanf("%c", &lowercase_letter);
	
	/* Converting the lowercase letter to an uppercase letter */
	uppercase_letter = lowercase_letter - 32;
	
	/* Displaying the uppercase letter on the screen */
	printf("The corresponding uppercase letter is: %c\n", uppercase_letter);
	
	return 0;
}
