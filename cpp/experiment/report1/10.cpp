#include <stdio.h>

int main() {
	int num;
	
	printf("Numbers between 100 and 200 that are not divisible by 3:\n");
	
	for (num = 100; num <= 200; num++) {
		// check if it's not divisible by 3
		if (num % 3 != 0) {
			printf("%d,", num);
		}
	}
	
	return 0;
}

