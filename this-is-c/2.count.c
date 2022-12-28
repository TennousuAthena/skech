/*
  编写一个程序，对输入的一组整数
  分别统计其中正整数和负整数的个数（0作为结束标志）。
 */
#include<stdio.h>

int main(){
	int pos=0, neg=0, tmp;
	while(1){
		scanf("%d", &tmp);
		if(tmp > 0)
			pos+=1;
		else if (tmp < 0)
			neg++;
		else{
			printf("正整数有%d个，负整数有%d个", pos, neg);
			return 0;
		}
	}
	
}
