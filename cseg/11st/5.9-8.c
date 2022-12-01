/*
  【问题描述】
  
  编写函数int fac(int n)用于输出n的所有因子的和，要求在主函数中输入n，调用函数fac输出其所有因子。
  
  请只提供子函数的编写。
  
  【输入形式】
  【输出形式】
  【样例输入】
  
  12
  
  【样例输出】
  
  因子：1 2 3 4 6 12
  
  因子和：28
  

 */
#include<stdio.h>
int  fac(int  n);
int  main()
{
	int  n;
	scanf("%d",&n);
	printf("因子：");
	printf("\n因子和：%d",fac(n));
	return  0;
}
/* ------ */
int  fac(int  n){
	int sum = 0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i*j == n){
				printf("%d ", i);
				sum +=i;
			}
		}
	}
	return sum;
}
/* ------ */
