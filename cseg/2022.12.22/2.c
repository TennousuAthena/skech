#include<stdio.h>
//输入3*4的二维数组，输出每一列的最大值。
int main()
{
	int m[4], arr[3][4];
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(int i=0; i<4; i++){
		m[i] = arr[0][i];
		for(int j=0; j<3; j++){
			m[i] = (arr[j][i] > m[i]) ? arr[j][i] : m[i];
		}
		printf("max[%d]=%d\n", i, m[i]);
	}
	
	
	
}
