/*
  初始化一个整数矩阵a[2][3]={{1,0,1},{0,1,1}}，输入b[3][2]，输出两个矩阵乘运算的结果。
  
  输出格式："%3d"
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define M 5

int main(){
	int i,j,k;
	int matrix2[M][M],row1,col1,row2,col2;
	int ans[M][M];      //运算结果，矩阵输出
	row1=2;col1=3;row2=3;col2=2;
	int matrix1[2][3] = {{1,0,1},{0,1,1}};
	for(i=0;i<row2;i++){
		for(j=0;j<col2;j++){
			scanf("%d",&matrix2[i][j]); 
		} 
	}
	
	memset(ans,0,sizeof(ans));
	
	for(i=0;i<row1;i++){
		for(j=0;j<col2;j++){
			for(k=0;k<col1;k++){
				ans[i][j]=ans[i][j]+matrix1[i][k]*matrix2[k][j]; 
			} 
		} 
	}
	
	for(i=0;i<row1;i++){
		for(j=0;j<col2;j++){
			printf("%3d",ans[i][j]); 
		} 
		printf("\n"); 
	} 
	return 0;
}
