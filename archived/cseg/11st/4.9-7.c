/*
  编写函数求组合数，从主函数输入整数n，调用函数求1~n可以组合成多少个不同的三位数，打印出这些三位数，输出格式为："%d%d%d,"，主函数中输出个数，输出格式为："\n可组成%d个不同的3位数"。
  
  请只提供子函数的编写。
  
  【样例输入】
  
  5
  
  【样例输出】
  
  123,124,125,132,134,135,142,143,145,152,153,154,213,214,215,231,234,235,241,243,245,251,253,254,312,314,315,321,324,325,341,342,345,351,352,354,412,413,415,421,423,425,431,432,435,451,452,453,512,513,514,521,523,524,531,532,534,541,542,543,
  
  可组成60个不同的3位数
  

 */
#include  <stdio.h>
int  fun(int  n);
int  main()
{
	int  n;
	scanf("%d",&n);
	printf("\n可组成%d个不同的3位数",fun(n));
}
/* ------ */
int  fun(int  n){
	int count = 0;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			for (int k=1; k<=n; k++){
				if(i != j&& i != k && j!=k){
					printf("%hd%hd%hd,",i, j, k);
					count++;
				}
			}
		}
	}
	return count;
}
/* ------ */