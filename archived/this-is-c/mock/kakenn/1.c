#include <stdio.h>

int main(void) {
	int i, j, k;
	
	printf("The Armstrong numbers are:\n");
	
	for (i = 1; i <= 9; i++) {
		for (j = 0; j <= 9; j++) {
			for (k = 0; k <= 9; k++) {
				int num = i * 100 + j * 10 + k;
				if (num == i * i * i + j * j * j + k * k * k) {
					printf("%d\n", num);
				}
			}
		}
	}
	
	return 0;
}
/*
  在这个程序中，我们使用了三重循环来枚举所有3位数的每一种可能的数字组合。每一位的数字范围是0到9。
  
  在循环内部，我们使用变量i、j和k分别表示数字的百位、十位和个位。然后，我们将这三个数字组合起来，并将它们的立方和与该数字相比较。如果它们相等，那么该数字就是一个水仙花数，我们就可以输出它。
 */
