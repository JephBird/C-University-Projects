#include <stdio.h>

int main()
{
    /* This code shows you what happens if an unsigned short ends up as a 
    negative value*/
    
    // First we assign the shorts
    short a = 30;
    short b = 40;
    unsigned short c = a - b;
    
    /* We then print the result, along with the result we could expect following
    normal expectations for subtraction */
    printf("Although c = %d - %d the value of c is: %d\n", a, b, c);

    /* We can see that the short has overflowed and is now 9 less than the
    highest possible value*/
    return 0;
}