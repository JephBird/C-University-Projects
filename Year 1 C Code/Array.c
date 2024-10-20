#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int numAmount = 15;
int numbers[15] = {0};
int intSum, intRev = 0;
double intAvg = 0;


int main()
{
    printf("Please enter %i integers:\n\r", numAmount);
    
    for (int i = 0; i < numAmount; i++) {
        scanf("%d", &numbers[i]);
    }
    printf("Your numbers in reverse order are:\n\r");
    for (int i = 0; i < numAmount; i++) {
        printf("%d, ", numbers[(14-i)]);
    }
    
    for (int i = 0; i < numAmount; i++) {
        intSum = intSum + numbers[i];
    }
    
    intAvg = intSum/15.0;
    
    printf("\nThe Sum of your numbers is %d\n\r", intSum);
    printf("The Average of your numbers is %f\n\r", intAvg);
    
    
    
    return 0;
}
