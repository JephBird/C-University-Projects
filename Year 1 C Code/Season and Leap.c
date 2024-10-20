#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
        int year, month, day;
        printf("Please input a month of the year (1-12): \r\n");
        scanf("%d", &month);
        printf("And now please input a day of the month (1-31): \r\n");
        scanf("%d", &day);
        printf("Lastly, please input a year: \r\n");
        scanf("%d", &year);
        
        if (((month == 3) && (day >= 20)) || (month == 4) || (month == 5) || ((month == 6) && (day <= 20))){
            printf("This is a day in Spring and ");
        }
        else if (((month == 6) && (day >= 21)) || (month == 7) || (month == 8) || ((month == 9) && (day <= 21))){
            printf("This is a day in Summer and ");
        }
        else if (((month == 9) && (day >= 22)) || (month == 10) || (month == 11) || ((month == 12) && (day <= 20))){
            printf("This is a day in Autumn and ");
        }
        else 
            printf("This is a day in Winter and ");

        if ((((year % 4) == 0) && !((year % 100) == 0)) || (((year % 400) == 0) && ((year % 100) == 0))) {
            printf("this is a leap year!");
        }
        else 
            printf("this is not a leap year!\r\n");
            
            
        getchar();
        getchar();

    return 0;
}
