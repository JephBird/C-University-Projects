#include <stdio.h>

int main()
{
    /*This code shows you what happens if we allocate a value out of
    range to a signed and unsigned short*/
    
    // First we allocate the short variables
    unsigned short a = 65535;
    signed short b = 32767;
    
    // We then print these for later comparison
    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);
    
    // Here we add 1 to each extra value before printing
    a = a + 1;
    b = b + 1;
    
    // And here we print them again
    printf("If we add 1 the value of a is now: %d\n", a);
    printf("If we add 1 the value of b is now: %d\n", b);
    
    /* We can see that these shorts have overflown, causing them to go straight
    to the lowest possible value, 0 for unsigned and -32768 for signed */
    
    return 0;
}
