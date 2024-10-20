#include <stdio.h>

int main()
{
    /* This code shows the difference between using %d and %lld in a printf
    statement*/
    
    // First we assign the long long
    long long a = 1234567891011;

    // We then print the integer to its required specifications
    printf("a printed with format specifier 'd' is: %d\n", a);
    printf("a printed with format specifier 'lld' is: %lld", a);
    
    /* We can see 2 things. At least with Online GDB, printing a long long with
    %d gives a warning. Next we can see that with format specifier %d the
    long long is truncated and has only displayed 10 digits, not the whole of
    the number, while %lld has printed the number in its entirety */

    return 0;
}

