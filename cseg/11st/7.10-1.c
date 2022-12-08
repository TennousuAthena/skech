/*
  编写int fun(int x)函数，其功能是判断一个三位数x是否是水仙花数，如果是则返回1，不是返回0。 main函数中调用fun函数找出三位数中的所有水仙花数，并打印输出。说明：所谓“水仙花数”即是指一个三位数，其各位数字的立方和等于该数本身。
  
  【样例输入】
  
  100
  
  【样例输出】
  
  153 370 371 407

 */
#include<stdio.h>
int  fun(int  x);
int  main()
{  int  m,n,i;
	scanf("%d",&n);
	for(i=n;i<=999;i++)
	{
		m=fun(i);
		if(m==1)
			printf("%d  ",i);
	}
}
/* ------ */
int  fun(int  x){
	int 个位 = x %10;
	int 十位 = (x/10) %10;
	int 百位 = (x/100) %10;
	int 个位立方 = 个位*个位*个位;
	int 十位立方 = 十位*十位*十位;
	int 百位立方 = 百位*百位*百位;
	if(个位立方 + 十位立方 + 百位立方 == x){
		return 1;
	}
	return 0;
}
/* ------ */
