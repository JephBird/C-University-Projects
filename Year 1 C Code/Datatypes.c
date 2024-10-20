#include <stdio.h>

int main()
{
    
    /* This code takes various integers and characters and performs
    operations on them to explain how chars and integers interpret
    different datatypes*/
    
    // First we assign our variables
	int a = 5;
	int b = 10;
	int c;
	unsigned char d = 'd';
	unsigned char e = 'e';
	unsigned char f;


    /* We then perform each action in turn, assigning c and f to their
    respective values off the sheet and printing them */
	c = a + d;

	printf("When c = a + d, c is %d\n", c);
	
	f = d + e;
	
	printf("When f = d + e, f is %c\n", f);

    c = e - d;

	printf("When c = e - d, c is %d\n", c);
	
	f = b + e;
	
	printf("When f = b + e, f is %c\n", f);

    /* Here we can see that char types interpret integers as a way to
    find their position in the ASCII table and integer types take
    the value of the position of the char to perform operations with.*/
    return 0;
}
