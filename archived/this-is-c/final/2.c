/*
  编写程序，创建一个4行3列的二维整型数组
  任意选取30-99之间的数据进行初始化
  计算第3列数组元素的平均值
  将数组中所有低于该平均值的元素替换为0
  要求输出原始数组矩阵、第3列数组元素平均值
  以及替换后的数组矩阵。
 */
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define SEED 114514     //初始种子
#define RAND_MIN_NUM 30
#define RAND_MAX_NUM 99


int randRange(int min, int max, unsigned int* seed){
	*seed +=1;
	srand(SEED + *seed);
	int dif = max - min + 1;
	return rand() % dif + min;
}

int main(){
	unsigned int seed = SEED;
	int arr[3][4];
	printf("Original array:\n");
	for(int i=0;i<3; i++){
		for(int j=0;j<4; j++){
			arr[i][j] = randRange(RAND_MIN_NUM, RAND_MAX_NUM, &seed);
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	float colum_3_avg;
	for(int i=0; i<3; i++){
		colum_3_avg += arr[i][2];
	}
	colum_3_avg /= 3.0;
	printf("Average of col 3 is %f\n", colum_3_avg);
	printf("Replaced array:\n");
	for(int i=0;i<3; i++){
		for(int j=0;j<4; j++){
			if(arr[i][j] < colum_3_avg){
				arr[i][j] = 0;
			}
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
