/*
  5. 实验8-9：求鞍点（二维数组、字符数组）
  输入一个3*4二维数组，求其“鞍点”，即该位置上的元素在该行上最大，在该列上最小，如果没有鞍点输出"no saddlepoint"。
  【输入形式】
  3*4二维数组
  【输出形式】
  
  saddlepoint: %d, col: %d, row:%d
  
  或
  
  no saddlepoint
  
  
  【样例输入】
  
  1 9 8 4
  2 6 7 5
  3 8 9 5
  
  【样例输出】
  
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
