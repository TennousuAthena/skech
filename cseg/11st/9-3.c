/*
  编写函数int prm(int n)判断n是否是素数，定义main函数输入m值，调用prm函数判断，在main函数中输出1~m之间的所有素数，输出格式"%d "。
  
  【样例输入】
  
  80
  
  【样例输出】
  
  2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 
  

 */
#include  <stdio.h>
#include  <stdlib.h>
#include  <math.h>
int  prm(int  n);
int  main()
{
	int  i,m;
	scanf("%d",&m);
	for(i=0;i<=m;i++)
	{
		if(prm(i)==1)  printf("%d  ",i);}
	return  0;
}
/* ------ */
int  prm(int  n){
	if(n<2)
		return 0;
	for(int i=2; i<=n/2; i++){
		if(n % i ==0)
			return 0;
	}
	return 1;
}
/* ------ */
