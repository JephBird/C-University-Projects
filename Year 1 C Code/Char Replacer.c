#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    /* In this code we take 5 characters as input from the user, saving. 
    these characters to a char array. We then print these characters before 
    allowing the user to replace one of them*/
    
    /* We first set up a char array, have used a variable for size to allow 
    for larger arrays*/ 
    int arraySum = 6;
    char textArray[arraySum];
    
    /* Here we use a for loop to loop through the non-null parts of the array
    and insert a character into each*/
    printf("Please enter five characters, each followed by an enter: \r\n");
    for(int i = 0; i<arraySum-1 ;i++) {
        textArray[i] = getchar();
        getchar(); 
    }
    
    
    // We then use another for loop to print the array
    for(int i = 0; i<arraySum-1 ;i++) {
        printf("%c", textArray[i]);
    }

    /* Next we initialise a counter out of range and use a while loop to keep
    keep prompting the user until they enter an appropriate number */
    int counter = 6;
    while(counter > 5 || counter <1) {
        printf("\n\nPlease insert a number from 1-5 to replace one letter: ");
        scanf("%d", &counter);
        getchar();
    }
    
    // We then prompt them for the replacement character
    printf("\nPlease enter the replacement character: ");
    textArray[counter-1] = getchar();
    getchar();
    
    
    // We lastly use a loop to print out the whole array once more
    for(int i = 0; i<arraySum-1 ;i++) {
        printf("%c", textArray[i]);
    }
	
    return 0;
}
