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
#include<stdio.h>
int max_in_row(int a[], int* rid){
	int max = a[0];
	for(int i=0; i<3; i++)
		if(a[i+1] > max){
			*rid = i+1;
			max = a[i+1];
		}
	
	
	return max;
}


int main(){
	int a[3][4];
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int rid = 0, cid=0;
	for(int i=0; i<3; i++){
		max_in_row(a[i], &rid);
		int min = a[i][0];
		for(int j=0; j<4; j++){
			if(a[i][j+1] < min)
				min = a[i][j+1];
			cid = j+1;
		}
	}
}
