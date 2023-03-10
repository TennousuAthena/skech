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

#define MAX_LEN 30

// 删除字符串str中所有a代表的字符，被删除后的字符依次向前移动
void fun(char str[MAX_LEN], char a) {
  int len = 0;
  while (str[len] != '\0') {
    len++;
  }

  for (int i = 0; i < len; i++) {
    if (str[i] == a) {
      for (int j = i; j < len - 1; j++) {
        str[j] = str[j + 1];
      }
      len--;
      i--;
    }
  }
}

int main() {
  char str[MAX_LEN] = "This is a test of C language.";
  printf("原字符串：%s\n", str);

  char a;
  printf("输入字符a：");
  scanf("%c", &a);

  fun(str, a);
  printf("删除之后的字符串：%s\n", str);

  return 0;
}
