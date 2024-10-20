#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float sum3(float a, float b, float c);

int main()
{
    float num1, num2, num3;
    num1 = num2 = num3 = 0;
    printf("Please enter your first number: ");
    scanf("%f", &num1);
    printf("Please enter your second number: ");
    scanf("%f", &num2);
    printf("Please enter your third number: ");
    scanf("%f", &num3);
    
    float ans = sum3(num1, num2, num3);
    printf("Your total is %f.", ans);
    
    return 0;
}


float sum3(float a, float b, float c){
    return a+b+c;
}