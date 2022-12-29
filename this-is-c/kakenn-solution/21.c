/*
	Warning! All the contents are automatically generated by KakennL which might be not correct!
   ▄▄▄▄▄▄▄  ▄  ▄         ▄▄▄▄▄▄▄  
   █ ▄▄▄ █ ▄▄█▀█ ▄▀▀▀▄▀▀ █ ▄▄▄ █  
   █ ███ █  ▀█▀ ▄██▀▄█▀  █ ███ █  
   █▄▄▄▄▄█ ▄▀▄ ▄ █▀▄ ▄▀█ █▄▄▄▄▄█  
   ▄▄▄ ▄▄▄▄█▀█▄▀█▄███ ▄█▄▄   ▄    
   ██▄▀▄█▄▀▀▄▀▀ ▀█▀▀▄   ▀█▄▄▀▄▄█  
      █  ▄▄▄  ▀▄█ █ ▀▀██▄█  ▄ █▄  
   ▀ █▄▀ ▄█▀█▄██▀▀ ▄▀█ ▀▀▀▄ █ ▄█  
   ▄ ▄▄█▄▄ ▄▀▀▄▀█▀█▄█ ▄██▄▄ █ █▄  
   ▄▀███ ▄▄ ▄▀▀ █▀▀█ ▄ ▀▀█  ▀▀▄█  
   ▄▀▀██▄▄ █▀▄▀▄█▄ ▀▀  ▄▄▄▄█▀ ▀   
   ▄▄▄▄▄▄▄ █  ███▀ ▀▀███ ▄ █▄▀██  
   █ ▄▄▄ █ █  ▄█▀▀▄██▀ █▄▄▄█▀ █   
   █ ███ █ ▄▀▄▀   ▀█▀ █▀▄ ▀█▄▀▀█  
   █▄▄▄▄▄█ █▀▀ ▄█▀ ▄▀ ▀█ ▄▄▄▄ █▄  
                                  
*/
#include <stdio.h>

#define ROWS 4
#define COLS 4

// 交换最大元素所在的列与次大元素所在的列
void change(int a[ROWS][COLS]) {
  int max_row = 0, max_col = 0;
  int sec_max_row = 0, sec_max_col = 0;
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      if (a[i][j] > a[max_row][max_col]) {
        sec_max_row = max_row;
        sec_max_col = max_col;
        max_row = i;
        max_col = j;
      } else if (a[i][j] > a[sec_max_row][sec_max_col]) {
        sec_max_row = i;
        sec_max_col = j;
      }
    }
  }
  for (int i = 0; i < ROWS; i++) {
    int temp = a[i][max_col];
    a[i][max_col] = a[i][sec_max_col];
    a[i][sec_max_col] = temp;
  }
}

int main() {
  int a[ROWS][COLS] = {
    {1, 4, 5, 8},
    {3, 2, 6, 7},
    {9, 1, 4, 3},
    {2, 7, 8, 6}
  };

  printf("原始矩阵：\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }

  change(a);

  printf("交换后的矩阵：\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }

  return 0;
}
