#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fPAmount = 0;
float fPTemp,fPTotal = 0;


int main()
{
    printf("Please enter the number of floating points you want to add: ");
    scanf("%d", &fPAmount);
    
    for (int i=0; i<fPAmount; i++){
        printf("Please enter floating point number %d: ", i+1);
        scanf("%f", &fPTemp);
        fPTotal=fPTotal + fPTemp;
    }
    getchar();
    printf("Your total is %f", fPTotal);
}