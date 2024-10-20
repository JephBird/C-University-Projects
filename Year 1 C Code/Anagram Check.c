#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char word1[50] = {0};
char word2[50] = {0};
int anagram = 1;
int wordLength, count1, count2 =0;

int main()
{
    printf("Please enter your first word: ");
    scanf("%50s", word1);
    
    printf("Please enter your second word: ");
    scanf("%50s", word2);
    
    while(1){
        if (((word1[count1] > 65) && (word1[count1] < 91)) || 
        ((word1[count1] > 96) && (word1[count1] < 123))) {
            count1++;
        }
        else break;
    }
    
    while(1){
        if (((word2[count2] > 65) && (word2[count2] < 91)) || 
        ((word2[count2] > 96) && (word2[count2] < 123))) {
            count2++;
        }
        else break;
    }
    
    for(int i = 0; i <count1; i++ ){
        if((word1[i]>64)&&(word1[i]<91)){
            word1[i] = word1[i]+32;
        }
        if((word2[i]>64)&&(word2[i]<91)){
            word2[i] = word2[i]+32;
        }
    }
    
    if (count1 != count2){
        anagram = 0;
    }
    else{
    wordLength = count1;
        for (int i = 0; i<wordLength; i++ ){
            count1 = 0;
            count2 = 0;
            for (int j = 0; j<wordLength; j++){
                if (word1[i] == word1[j]){
                    count1++;
                }
            
                if (word1[i] == word2[j]){
                    count2++;
                }
            }
            if (count1 != count2){
            anagram = 0;
            }
        }
    }

    
    if (anagram == 1){
        printf("Your words are anagrams of eachother!");
    }
    else{
        printf("Your words aren't anagrams of eachother.");
    }
    return 0;
}
