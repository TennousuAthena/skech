#include<stdio.h>
#include<string.h>

int delFirst(char *c, char*t, char ch){
    int found_flag = -1;
    for(int i=0; i<strlen(c); i++){
		t[i] = c[i];
         if(c[i] == ch){
			found_flag = i;
			 break;
		 }
     }
	if(found_flag >=0){
		for(int i=found_flag; i<strlen(c); i++){
			 t[i] = c[i+1];
		 }
	}
    return found_flag;
}

int main(void){
    char t[500], ch, c[]="Hello World!";
    printf("%d %s", delFirst(c, t, 'o'), t);

}

