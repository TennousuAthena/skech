/*
  2. 随堂练习8-2：矩阵练习
  【问题描述】
  
  定义并输入一个二维数组a[3][4]，将其第一列和第三列对调，并输出数组。
 */

#include<stdio.h>

int main(){
	int a[4][4];
	int tmp;
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int j=0; j<4; j++){
		tmp = a[j][1];
		a[j][1] = a[j][3];
		a[j][3] = tmp;
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
}
