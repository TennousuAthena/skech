/*
  2. ������ϰ8-2��������ϰ
  ������������
  
  ���岢����һ����ά����a[3][4]�������һ�к͵����жԵ�����������顣
 */

#include<stdio.h>

int main(){
	int a[4][4];
	int tmp;
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int j=0; j<4; j++){
		tmp = a[j][1];
		a[j][1] = a[j][3];
		a[j][3] = tmp;
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
}
