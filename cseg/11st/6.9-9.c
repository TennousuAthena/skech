/*
  编写函数double powr(int m,int n)计算m的n次幂，要求在主函数中输入m和n，调用函数powr输出结果。
  
  请只提供子函数的编写。
  
  【样例输入】
  
  3 7
  
  【样例输出】
  
  2187

 */
#include<stdio.h>
#include<math.h>
double  powr(int  m,int  n);
int  main()
{
	int  m,  n;
	scanf("%d%d",  &m,  &n);
	printf("%.0lf\n",  powr(m,n));
	return  0;
}
/* ------ */
double  powr(int  m,int  n){
	return pow(m, n);
}
/* ------ */
