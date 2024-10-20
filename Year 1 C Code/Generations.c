// Inlcuding the below so this will run properly on VS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
    // Initialising name array and birthyear integer
    int birthYear;
    char name[26];
    
    // Taking the user's name with Scanf after prompting
    printf("What is your name? \r\n");
    scanf("%s", name);
    
    // If lowercase changing the first letter of user's name to uppercase
    if((name[0] > 96) && (name[0] < 123)){
        name[0] = name[0] - 32;
    }
    
    // Taking year of birth with scanf after prompting
    printf("What is your year of birth? \r\n");
    scanf("%d", &birthYear);
        
    /* Using an if-elseif-else sequence using AND logic to place the user's
    year of birth into its correct bracket and then printing the output*/
    if ((birthYear > 1900) && (birthYear <= 1927)) {
        printf("Hello, %s, you are from the Greatest Generation!", name);
    }
    else if ((birthYear > 1927) && (birthYear <= 1942)) {
        printf("Hello, %s, you are from the Silent Generation (Traditionalist)!", name);
    }
    else if ((birthYear > 1942) && (birthYear <= 1964)) {
        printf("Hello, %s, you are from the Baby Boomer Generation!", name);
    }
    else if ((birthYear > 1964) && (birthYear <= 1976)) {
        printf("Hello, %s, you are from Generation X!", name);
    }
    else if ((birthYear > 1976) && (birthYear <= 1995)) {
        printf("Hello, %s, you are a Millennial (Generation Y)!", name);
    }
    else if ((birthYear > 1995) && (birthYear <= 2012)) {
        printf("Hello, %s, you are from Generation Z!", name);
    }
    else if (birthYear > 2012) {
        printf("Hello, %s, you are from Generation Alpha!", name);
    }
    // To catch any unlikely dates
    else printf("Hello, %s, you are probably not being truthful about your age!", name);

    return 0;
}