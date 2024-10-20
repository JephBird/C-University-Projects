#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




int main()
{
    int value = 100;
    int *pValue = &value;
    int input = 0;
    int addSub, flag;
    printf("The memory location of 'value' is %d\n", pValue);
    
    while (1){
        addSub = 2;
        flag = 0;
        printf("Please input an integer value: ");
        scanf("%d", &input);
        getchar();
        while ((addSub != 0) && (addSub != 1)){
            printf("Please type 1 if you want this to be added, or 0 to be subtracted from value: ");
            scanf("%d", &addSub);
            getchar();
        }
        
        if (addSub == 1) *pValue = *pValue + input;
        else *pValue = *pValue - input;
        
        if (((*pValue > 47)&&(*pValue < 58)) || ((*pValue > 64)&&(*pValue < 91)) || ((*pValue > 96)&&(*pValue < 123))){
            printf("Your value is %d and the alphanumeric character responding to this is %c.\n", *pValue, *pValue);
        }
        else{
            printf("Your value is not alphanumeric!\n");
        }
    }
    return 0;
}