#include <stdio.h>

int main() {
	int score;
	char grade;
	
	// Input the score
	printf("Enter the score (out of 100): ");
	scanf("%d", &score);
	
	// Assign grades based on the score
	if (score >= 90) {
		grade = 'A';
	} else if (score >= 80 && score <= 89) {
		grade = 'B';
	} else if (score >= 70 && score <= 79) {
		grade = 'C';
	} else if (score >= 60 && score <= 69) {
		grade = 'D';
	} else {
		grade = 'E';
	}
	
	// Output the grade
	printf("The grade for the score %d is %c\n", score, grade);
	
	return 0;
}

