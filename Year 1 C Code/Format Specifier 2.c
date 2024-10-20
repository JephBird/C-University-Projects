#include <stdio.h>

int main()
{
    /*This code investigates the difference between single and double
    precision*/
    
    /* First we take variables for the float and the double, taking care to keep
    them the same for comparison purposes*/
    float b = 1.2345678910;
    double c = 1.2345678910;
    
    /* We now print these to the same number of decimal places to observe the 
    result */
    printf("Float b displayed with format specifier '.10f' is: %.10f\n", b);
    printf("Double c displayed with format specifier '.10f' is: %.10f", c);
    
    /* We can see that the double displays true but the float has lost some
    precision. This is as the double takes up twice the storage of the float 
    and so can save more decimal places with more precision */
    
    return 0;
}
