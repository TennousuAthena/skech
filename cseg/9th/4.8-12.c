/*
  4. 实验8-12：交换主次对角线
  从键盘输入整数n(2<n<10)的值，输入一个二维整型数组(n×n)。对该二维数组所构成的矩阵进行主对角线和次对角线元素的位置进行交换，输出变换后的数组。
  
  【样例输入】
  
  4
  
  3 5 6 7
  
  8 5 6 2
  
  4 6 2 1
  
  9 6 8 3
  
  【样例输出】
  
  7 5 6 3
  
  8 6 5 2
  
  4 2 6 1
  
  3 6 8 9
 */

#include<stdio.h>

int main(){
	int a[11][11], n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++){
			scanf("%d", &a[i][j]);
		}
	int tmp;
	for(int i=1; i<=n; i++){
		tmp = a[i][n-i+1];
		a[i][n-i+1] = a[i][i];
		a[i][i] = tmp;
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
}
