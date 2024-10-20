#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char word[50] = {0};
int count, wordLength = 0;
int palindrome = 1;


int main()
{
    printf("Please enter a word to check if it is a palindrome: ");
    scanf("%s", word);
    
    while(1){
        if (((word[count] > 65) && (word[count] < 91)) || 
        ((word[count] > 96) && (word[count] < 123))) {
            count++;
        }
        else break;
        
    }
    
        for(int i = 0; i <count; i++){
        if((word[i]>64)&&(word[i]<91)){
            word[i] = word[i]+32;
        }
    }
    
    for (int i = 0; i<((count/2)+1); i++ ){
        // printf("%c %c\n", word[i], word[((count-1)-i)]);
        if (word[i] == word[((count-1)-i)]){
            
            continue;
        }
        else {
            palindrome = 0;
            break;
        }
    }
    
    if (palindrome == 1){
        printf("Your word is a palindrome!");
    }
    else{
        printf("Your word is not a palindrome.");
    }
     return 0;
}
