/*
  【问题描述】
  
  输入int a[10]的十个元素，删除其中所有重复的元素，输出删除后的结果。 
  
  说明：请只提供需要补全的代码部分，不需要提供完整程序。可根据需要定义其他变量。
  
  【输入形式】
  【输出形式】
  【样例输入】
  
  2 2 3 5 2 6 8 5 3 6
  
  【样例输出】
  
  2 3 5 6 8
 */
#include  <stdio.h>
int  main()
{
	int  a[10];
	int  i,  j  ,n;  
	/* 填空开始 */
	n=10;
	int k;
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	for ( i = 0; i < n; i ++)  
	{  
		for ( j = i + 1; j < n; j++)  
		{  
			// use if statement to check duplicate element  
			if ( a[i] == a[j])  
			{  
				// delete the current position of the duplicate element  
				for ( k = j; k < n - 1; k++)  
				{  
					a[k] = a [k + 1];  
				}  
				// decrease the size of array after removing duplicate element  
				n--;  
				
				// if the position of the elements is changes, don't increase the index j  
				j--;      
			}  
		}  
	}  
	
	/* 填空结束 */
	
	for(i  =  0;  i<n;  i++)
		printf("%d  ",  a[i]);
	return  0;
}
