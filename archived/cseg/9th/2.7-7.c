/*
  ������������
  
  ����int a[10]��ʮ��Ԫ�أ�ɾ�����������ظ���Ԫ�أ����ɾ����Ľ���� 
  
  ˵������ֻ�ṩ��Ҫ��ȫ�Ĵ��벿�֣�����Ҫ�ṩ�������򡣿ɸ�����Ҫ��������������
  
  ��������ʽ��
  �������ʽ��
  ���������롿
  
  2 2 3 5 2 6 8 5 3 6
  
  �����������
  
  2 3 5 6 8
 */
#include  <stdio.h>
int  main()
{
	int  a[10];
	int  i,  j  ,n;  
	/* ��տ�ʼ */
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
	
	/* ��ս��� */
	
	for(i  =  0;  i<n;  i++)
		printf("%d  ",  a[i]);
	return  0;
}
