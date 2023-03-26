#include <stdio.h>

int main() {
	int num, sum;
	printf("The narcissus are:\n");
	for (num = 100; num <= 999; num++) {
		// extract digits
		int hundreds = num / 100;
		int tens = (num % 100) / 10;
		int ones = num % 10;
		
		// calculate sum of cubes
		sum = (hundreds * hundreds * hundreds) + 
		(tens * tens * tens) + 
		(ones * ones * ones);
		// check if it's a narcissus number
		if (sum == num) {
			printf("%d\n", num);
		}
	}
	
	return 0;
}

