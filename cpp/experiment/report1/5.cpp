#include <stdio.h>

int main()
{
	float fahrenheit, celsius;
	
	/* Accepting the Fahrenheit temperature from the user */
	printf("Enter the temperature in degrees Fahrenheit:");
	scanf("%f", &fahrenheit);
	
	/* Converting the Fahrenheit temperature to Celsius temperature */
	celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
	
	/* Displaying the Celsius temperature on the screen with only three decimal places */
	printf("The temperature in degrees Celsius is: %.3f\n", celsius);
	
	return 0;
}
