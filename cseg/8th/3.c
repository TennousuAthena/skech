/*
  输入一个三位或四位整数n，求满足：xyz+yzz=n的所有x,y,z，如果没有对应的组合则输出"无对应组合"（xyz和yzz分别代表一个三位数）
  【输入形式】
  一个三位或四位整数n
  【输出形式】
  
  所有非零的x、y、z组合
  
  或
  
  "无对应组合"
  
  
  【样例输入】
  
  1234
  
  【样例输出】
  
  6,5,7
 */
#include<stdio.h>
int main(){
	int n, mark=0;
	scanf("%d", &n);
	for(int x=1; x<=9; x++)
		for(int y=1; y<=9; y++)
			for(int z=1; z<=9; z++)
				if(x*100+y*10+z + y*100 + z*11 == n){
					printf("%d,%d,%d", x, y, z);
					mark++;
				}
	if(!mark)
		printf("无对应组合");
}
