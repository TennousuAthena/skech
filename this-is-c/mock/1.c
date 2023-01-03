#include<stdio.h>
#include<math.h>
/*
  编写程序，计算所有水仙花数
  （水仙花数是指一个3位数
  其每位数字的立方和等于该数）。
 */

int main(){
	for(int i=100; i<1000; i++){
		int z = i%10;
		int y = (i/10)%10;
		int x = (i/100)%10;
		
		if(pow(x, 3) + pow(y, 3) + pow(z, 3) == i){
			printf("%d ", i);
		}
	}
}
