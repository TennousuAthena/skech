/**
 * A palindrome is the same string when be read along and backward.
 *  For example, level or noon. Write a program, prompt the user to input a string,
 *  determine whether it is palindrome, and then output the corresponding judgment information. 
 * Use an independent function to determine whether the string is palindrome or not.
 */
#include<iostream>
#include<string.h>

void reverse(char* s)
{
	int len = 0;
	char* p = s;
	while (*p != 0)
	{
		len++;
		p++;
	}
	
	int i = 0;
	char c;
	while (i <= len / 2 - 1)
	{
		c = *(s + i);
		*(s + i) = *(s + len - 1 - i);
		*(s + len - 1 - i) = c;
		i++;
	}
}

bool is_palindrome(char *s){
	char s1[strlen(s)];
	strcpy(s1, s);
	reverse(s1);
	return strcmp(s1, s) == 0;
}

int main(){
	char s[] = "aaabbbcccbbbaaa";
	std::cout << is_palindrome(s);
}
