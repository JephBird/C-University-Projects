#include <stdio.h>

int main()
{

int s = 3;
int a = 1;

    for (int i=1; i<5; i++){
        for (int j=0; j<i; j++){
            printf("*\t");
        }
        printf("\r\n");
    }


    for (int i=1; i<5; i++){
        for(int j=0; j<s; j++){
            printf("\t");
        }
        for(int j=0; j<i; j++){
            printf("*\t\t");
        }
        printf("\r\n");
        s--;
    }
}