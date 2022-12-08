/*
  编写函数 int fun(int n)判断n是否是闰年，定义main函数输入年份，调用fun函数判断，在main函数中输出yes或no。
  
  请只提供子函数的编写。
  
  【样例输入】
  
  2000
  
  【样例输出】
  
  yes
 */
#include<stdio.h>
int  fun(int  n);
int  main()
{
	int  year  ,  f  ;
	scanf("%d",&year);
	f=fun(year);
	if(f==1)
		printf("yes");
	else
		printf("no");
}
/* ------ */
int fun(int n){
	if(n%4 ==0 || (n % 400 == 0 && n % 100 != 0))
		return 1;
	return 0;
}
/* ------ */
