/*
  6. ��֮ͳ��-1
  ������������
  
  �ɼ�������һ��������n��n<10000000�������㲢���1��n֮�����λ����֮����12�������ĸ�����
  
  ���磬���룺100
  
  1��100֮���ܹ���7�������λ��֮����12���ֱ�Ϊ��39��48��57��66��75��84��93��
  
  �����Ϊ��7
  100
  7
  
  ��������ʽ��һ��������n��n<10000000��
  
  �������ʽ���������������ĸ���
  ���������롿100
 */
#include<stdio.h>

int main(){
	int n, s=0, sum=0, num;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		s=0;
		num = i;
		while(num>0){
			s += num%10;
			num/=10;
		}
		if(s == 12)
			sum +=1;
	}
	printf("%d", sum);
}