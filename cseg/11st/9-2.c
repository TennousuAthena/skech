/*
  编写void prn(int n)函数打印如下图形，定义main函数输入n，调用prn函数输出n行等腰三角形。
  
 *
  
 * *
  
 * * *
  
 * * * *
 */
#include<stdio.h>
void  prn(int  n);
int  main()
{
	int  a;
	scanf("%d",&a);
	prn(a);
	return  0;
}
/* ------ */
void prn(int n){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	}
}
/* ------ */
