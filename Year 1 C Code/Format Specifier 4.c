#include <stdio.h>
#include <math.h>

int main()
{
    /*This code takes two variables, adds them and then prints them
    to the nearest integer value, to 1 decimal place, to 2 decimal places*/
    
    // First we set up the 3 floats
    float a = 8.9;
    float b = 6.7;
    float c = a + b;
    
    /* We then print these to the required specifications. Whilst OnlineGDB 
    automatically rounds truncated floats I have heard that this is not true 
    for all compilers and have therefore used the 'round' function from math.h 
    so that it will round to the nearest integer for sure, regardless of the 
    numbers input */
    printf("c rounded to the nearest integer is: %.0f\n", round(c));
    printf("c to 1 decimal place is: %.1f\n", c);
    printf("c to 2 decimal places is: %.2f\n", c);
    
    return 0;
}
