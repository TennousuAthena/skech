/*
  5. 实验8-9：求鞍点（二维数组、字符数组）
  输入一个3*4二维数组，求其“鞍点”，即该位置上的元素在该行上最大，在该列上最小，如果没有鞍点输出"no saddlepoint"。
  【输入形式】
  3*4二维数组
  【输出形式】
  
  saddlepoint: %d, col: %d, row:%d
  
  或
  
  no saddlepoint
  
  
  【样例输入】
  
  1 9 8 4
  2 6 7 5
  3 8 9 5
  
  【样例输出】
  
  saddlepoint: 7, col: 2, row:1
 */

#include <iostream>
using namespace std;
#define M 3
#define N 4

/*找出一个二维数组的鞍点(至多一个，可能没有）*/

int IsRowMax(int a[M][N], int i, int j);
int IsColMin(int a[M][N], int i, int j);
int main(){
	int a[M][N];
	int i, j;
	bool flag = false;             //是否有鞍点的标志
//	cout << "请输入5*4个元素：" << endl;
	for (i = 0; i < M; i++)         //创建二维数组
	{
		for (j = 0; j < N; j++)
			cin >> a[i][j];
	}
//	cout << "原始数组为：" << endl;
//	for (i = 0; i < M; i++)         //输出原始数组
//	{
//		for (j = 0; j < N; j++)
//			cout << a[i][j] << " ";
//		cout << endl;
//	}
	for (i = 0; i < M; i++)          //采用嵌套for结构，遍历每个元素，判断是否是鞍点
	{
		for (j = 0; j < N; j++)
		{
			if (IsRowMax(a, i, j) && IsColMin(a,i,j))     //两个条件都为真，说明该点是鞍点
			{
				cout << "saddlepoint: " <<a[i][j] <<", col: " << j << ", row:" << i << endl;
				flag = true;
			}
		}
	}
	if (!flag)
		cout << "no saddlepoint" << endl;
	
	return 0;
}
int IsRowMax(int a[M][N],int i,int j)     //判断是否是行最大，行号i不变，列号j变化
{
	int k, s = 1;
	for (k = 0; k < N; k++)
	{
		if (a[i][k]>a[i][j])     //只要一行中，有一个元素大于指定元素，那么该元素就不是改行中的最大值，返回0，结束循环比较
		{
			s = 0;
			break;
		}
	}
	return s;
}
int IsColMin(int a[M][N], int i, int j)   //判断是否为列最小，行号i变化，列号j不变
{
	int k, s = 1;
	for (k = 0; k < M; k++)
	{
		if (a[k][j] < a[i][j])     //只要一列中，有一个元素小于指定元素，那么该元素就不是该列的最小值，返回0，结束循环比较
		{
			s = 0;
			break;
		}
	}
	return s;
}
