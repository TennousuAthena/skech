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

int main(void) {
// 初始化数组
int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// 输入要删除的元素的位置n
int n;
printf("Enter the position of the element to delete: ");
scanf("%d", &n);

// 删除数组中的第n个元素
for (int i = n; i < 9; i++) {
a[i] = a[i + 1];
}

// 输出删除后的数组
printf("Array after deleting element at position %d: ", n);
for (int i = 0; i < 9; i++) {
printf("%d ", a[i]);
}

return 0;
}
