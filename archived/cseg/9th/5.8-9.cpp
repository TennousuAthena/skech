/*
  5. ʵ��8-9���󰰵㣨��ά���顢�ַ����飩
  ����һ��3*4��ά���飬���䡰���㡱������λ���ϵ�Ԫ���ڸ���������ڸ�������С�����û�а������"no saddlepoint"��
  ��������ʽ��
  3*4��ά����
  �������ʽ��
  
  saddlepoint: %d, col: %d, row:%d
  
  ��
  
  no saddlepoint
  
  
  ���������롿
  
  1 9 8 4
  2 6 7 5
  3 8 9 5
  
  �����������
  
  saddlepoint: 7, col: 2, row:1
 */

#include <iostream>
using namespace std;
#define M 3
#define N 4

/*�ҳ�һ����ά����İ���(����һ��������û�У�*/

int IsRowMax(int a[M][N], int i, int j);
int IsColMin(int a[M][N], int i, int j);
int main(){
	int a[M][N];
	int i, j;
	bool flag = false;             //�Ƿ��а���ı�־
//	cout << "������5*4��Ԫ�أ�" << endl;
	for (i = 0; i < M; i++)         //������ά����
	{
		for (j = 0; j < N; j++)
			cin >> a[i][j];
	}
//	cout << "ԭʼ����Ϊ��" << endl;
//	for (i = 0; i < M; i++)         //���ԭʼ����
//	{
//		for (j = 0; j < N; j++)
//			cout << a[i][j] << " ";
//		cout << endl;
//	}
	for (i = 0; i < M; i++)          //����Ƕ��for�ṹ������ÿ��Ԫ�أ��ж��Ƿ��ǰ���
	{
		for (j = 0; j < N; j++)
		{
			if (IsRowMax(a, i, j) && IsColMin(a,i,j))     //����������Ϊ�棬˵���õ��ǰ���
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
int IsRowMax(int a[M][N],int i,int j)     //�ж��Ƿ���������к�i���䣬�к�j�仯
{
	int k, s = 1;
	for (k = 0; k < N; k++)
	{
		if (a[i][k]>a[i][j])     //ֻҪһ���У���һ��Ԫ�ش���ָ��Ԫ�أ���ô��Ԫ�ؾͲ��Ǹ����е����ֵ������0������ѭ���Ƚ�
		{
			s = 0;
			break;
		}
	}
	return s;
}
int IsColMin(int a[M][N], int i, int j)   //�ж��Ƿ�Ϊ����С���к�i�仯���к�j����
{
	int k, s = 1;
	for (k = 0; k < M; k++)
	{
		if (a[k][j] < a[i][j])     //ֻҪһ���У���һ��Ԫ��С��ָ��Ԫ�أ���ô��Ԫ�ؾͲ��Ǹ��е���Сֵ������0������ѭ���Ƚ�
		{
			s = 0;
			break;
		}
	}
	return s;
}
