/*
  7. ʵ��8-3�����ظ�����������
  ��������int a[12]��Ԫ�أ�����������ظ�������������
  
  �����ʽ��num: %d, times=%d
  
  ���������롿
  
  6 6 3 4 6 3 4 6 7 1 1 5
  
  �����������
  
  num: 6, times=4
  

 */
#include<stdio.h>
#include<string.h>

int main(){
	int bucket[100];
	memset(bucket,0,sizeof(bucket));
	int n, max;
	for(int i=0; i<12; i++){
		scanf("%d", &n);
		bucket[n]++;
	}
	for(int i=0;i<100; i++){
		if(max < bucket[i]){
			max = i;
		}
	}
	printf("num: %d, times=%d", max, bucket[max]);
}
