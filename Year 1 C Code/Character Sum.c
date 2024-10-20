#include <stdio.h>

int main()
{
    
    /* In this code we take 3 characters as input from the user. We then
    print these characters before displaying the sum of their ASCII values*/
    
    /* Here we take their first letter and ensure to type getchar()
    again to stop any issues with C windows taking our enter key press
    as our next character*/
    printf("Please insert your first character: ");
    char inputa = getchar();
    getchar();
    
    
    // We then repeat this two more times
    printf("\nPlease insert your second character: ");
    char inputb = getchar();
    getchar();
    
    printf("\nPlease insert your third character: ");
    char inputc = getchar();
    
    /* Last we print all of these characters and their integer sum 
     on a single line*/
    printf("\nYour characters are %c, %c, and %c. ", inputa, inputb, inputc);
    printf("The sum of your characters' integer value is %d.", inputa + inputb 
    + inputc);
	
    return 0;
}
