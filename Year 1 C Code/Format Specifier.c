#include <stdio.h>

int main()
{
    //This code investigates the difference between %d and &7d
    
    // Here we take an integer variable to be used in the printf functions
    int a = 123;
    
    // We now print these with %d and %7d format specifiers
    printf("Int a displayed with format specifier 'd' is: %d\n", a);
    printf("Int a displayed with format specifier '7d' is: %7d", a);
    
    /* We can see that the outcome is that in the first printf the number keeps
    the spacing in line with the sentence but in the latter printf the presence
    of the '7' forces the displayed integer to take up 7 spaces leading to more
    whitespace between the text and the inserted variable*/
    
    return 0;
}
