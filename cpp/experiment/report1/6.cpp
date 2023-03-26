#include <stdio.h>

int main() {
	float a, b, c;
	
	// Taking input of three numbers
	printf("Enter the first number: ");
	scanf("%f", &a);
	
	printf("Enter the second number: ");
	scanf("%f", &b);
	
	printf("Enter the third number: ");
	scanf("%f", &c);
	
	// Sorting the numbers in ascending order using nested if statements
	if (a > b) {
		float temp = a;
		a = b;
		b = temp;
	}
	if (b > c) {
		float temp = b;
		b = c;
		c = temp;
	}
	if (a > b) {
		float temp = a;
		a = b;
		b = temp;
	}
	
	// Printing the sorted numbers
	printf("The numbers in ascending order are: %.2f, %.2f, %.2f\n", a, b, c);
	
	return 0;
}

