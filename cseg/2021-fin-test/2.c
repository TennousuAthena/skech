/*
  第二大题
  
  1．主观题
  
  （15分）
  
  编写程序：任意选取10—999的12个数据初始化一个3X4数组，统计由后2位构成的数是（本人学号末位＋4）的倍数的数组元素的个数，同时将该数组元素置为0。
  
  要求：在main函数初始化该数组，输出本人学号，按行输出原始数组及处理后的数组，并换行输出符合条件的元素个数。
  
  示例：224的后两位为24，假设学号末位是8，8＋4后为12，24是12的倍数，则将224置为0。
  
  说明：如果未找到符合条件的数组元素，处理后的数组与原始数组相同；本人学号末位可以直接用，不必计算取得。如果本人学号末位为非数字字符，请用9代替。
  

 */

#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
	srand((unsigned)time(NULL));
	int arr[3][4];
	int stuNum = 1+4, flag=0;
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			int r = 10 + rand() % 990;
			if(!(((r %100)*10 + r%10) % stuNum)){
				arr[i][i] = 0;
				flag++;
			}else{
				arr[i][i] = r;
			}
			printf("%d ", arr[i][i]);
		}
		printf("\n");
	}
	printf("%d", flag);
}
