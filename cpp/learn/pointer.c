#include <stdio.h>

int main() {
	int num = 100;
	int *ptr = &num;
	
	printf("Value of num: %d \n", num);
	printf("Address of num: %p \n", &num);
	printf("Value of ptr: %p \n", ptr);
	printf("Value pointed to by ptr: %d\n", *ptr);
	
	return 0;
}

