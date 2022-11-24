/*
  输入1~6中任意数字n，输出n~n+3可以组成多少个互不相同且无重复数字的3位数。要求输出所有符合条件的三位数(两个3位数之间用空格分隔)以及计算结果（另起一行输出）。
  
  例如：输入2，则输出2、3、4、5四个数字能够组成的所有不相同且无重复数字的3位数及个数。
  
  
  【输入形式】
  1~6中任意一个数字n
  【输出形式】
  输出n~n+3可以组成多少个互不相同且无重复数字的3位数。
 */
#include<stdio.h>

int main(){
	short num, count=0;
	scanf("%hd", &num);
	for (int i=num; i<=num+3; i++){
		for (int j=num; j<=num+3; j++){
			for (int k=num; k<=num+3; k++){
				if(i != j&& i != k && j!=k){
					printf("%hd%hd%hd ",i, j, k);
					count++;
				}
			}
		}
	}
	printf("\b\ncount=%hd", count);
}
