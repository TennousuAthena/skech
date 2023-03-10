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
#include <string.h>

int main(void)
{
    char str[100]; // 存储字符串str
    char ch; // 存储字符ch
    int i, j; // 循环变量

    printf("Enter a string: "); // 提示输入字符串str
    gets(str); // 从键盘输入字符串str
    printf("The original string is: %s\n", str); // 输出字符串str

    printf("Enter a character: "); // 提示输入字符ch
    ch = getchar(); // 从键盘输入字符ch
    getchar(); // 读取回车符

    // 删除字符串str中和字符ch相同的所有字符
    for (i = j = 0; str[i] != '\0'; i++) // 遍历字符串str
    {
        if (str[i] != ch) // 如果当前字符不是ch
        {
            str[j++] = str[i]; // 将当前字符复制到新字符串中
        }
    }
    str[j] = '\0'; // 在新字符串的末尾加上'\0'

    printf("After deleting character '%c', the new string is: %s\n", ch, str); // 输出新字符串

    return 0;
}
