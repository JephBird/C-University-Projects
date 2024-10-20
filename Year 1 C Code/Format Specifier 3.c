#include <stdio.h>
#include <math.h>

int main()
{
    /*This code prints out pi to the nearest integer value, to 2 decimal 
    places, to 5 decimal places and 10 decimal places*/
    
    // First we take a double for extra precision due to the 10 places needed
    double pi = 3.141592653589;
    
    /* We then print this four times to the required specifications. Whilst
    OnlineGDB automatically rounds truncated floats I have heard that this is
    not true for all compilers and have therefore used the 'round' function 
    from math.h so that it will round to the nearest integer for sure, 
    regardless of the number (although point 1 rounds down anyway) */
    printf("Pi rounded to the nearest integer is: %.0f\n", round(pi));
    printf("Pi to 2 decimal places is: %.2f\n", pi);
    printf("Pi to 5 decimal places is: %.5f\n", pi);
    printf("Pi to 10 decimal places is: %.10f\n", pi);
    
    return 0;
}
