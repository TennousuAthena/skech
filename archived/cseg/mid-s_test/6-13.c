#include<stdio.h>

int main(){
    double a;
    scanf("%lf", &a);
    printf("(0,0,%.0f)\n", a*10);
    for(int i=1; i<=6; i++)
        for(int j=1; j<=25; j++)
            if(i*0.5 + j*0.1 == a)
                printf("(%d,%d,%d)\n", 0, i, j);

    for(int k=1; k<=3; k++)
        for(int i=0; i<=6; i++)
            for(int j=1; j<=25; j++)
                if(k + i*0.5 + j*0.1 == a)
                    printf("(%d,%d,%d)\n", k, i, j);

}