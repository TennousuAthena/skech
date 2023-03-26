#include <stdio.h>

void calculate(float num1, float num2, void (*callback)(float, float))
{
	float sum = num1 + num2;
	float diff = num1 - num2;
	callback(sum, diff);
}

void outputResults(float sum, float diff)
{
	printf("Sum: %.2f\n", sum);
	printf("Difference: %.2f\n", diff);
}

int main()
{
	float num1, num2;
	printf("Enter two floating-point numbers: ");
	scanf("%f %f", &num1, &num2);
	calculate(num1, num2, outputResults);
	return 0;
}

