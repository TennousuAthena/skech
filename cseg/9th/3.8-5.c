/*
  3. ʵ��8-5����ӡ�ӷ��ھ�����ά���顢�ַ����飩
  ����n�����n~n�ļӷ��ھ��������ʽ"%3d".
  
  
  ��������ʽ��
  n
  �������ʽ��
  n~n�ļӷ��ھ���
  ���������롿
 */

#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for (int i=0; i<=n; i++){
		for (int j=0; j<=n; j++){
			printf("%3d",i+j);
		}
		printf("\n");
	}
	
}
