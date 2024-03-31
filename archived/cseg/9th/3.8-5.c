/*
  3. 实验8-5：打印加法口诀表（二维数组、字符数组）
  输入n，输出n~n的加法口诀表，输出格式"%3d".
  
  
  【输入形式】
  n
  【输出形式】
  n~n的加法口诀表
  【样例输入】
 */

#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for (int i=0; i<=n; i++){
		for (int j=0; j<=n; j++){
			printf("%3d",i+j);
		}
		printf("\n");
	}
	
}
