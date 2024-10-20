// defining the below to prevent VS warnings
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
    /* We define chars and arrays, one array for the message, another array for 
    ascii characters, and a character for the most common character for later*/
    char message[281] = {0}, holder[257] = {13}, mostCommon = 0;

    /* We define our integers: the 'counts' are the amount of each character
    type and the others are explained further down.*/
    int whitespaceCount, numCount, lowerCount, upperCount, nonAlphaCount, 
    mostCommonAmt, compAmt, msgLen, holderPos, holderFlag;
   
   // These lines initialise these values to 0
    whitespaceCount = numCount = lowerCount = upperCount = nonAlphaCount = 
    mostCommonAmt = compAmt = msgLen = holderPos = holderFlag = 0;
    
    /* We prompt the user for a message. The format specifier "%280[^\n] only
    allows the message to be a max of 280 characters and to search for a 
    newline, so that the message will save everything up until the enter*/
    printf("Please enter your Twitter message (280 characters max): ");
    scanf("%280[^\n]", message);
    
    // message is then printed back to the terminal
    printf("Your message is: %s\r\n\r\n", message);
    
    /* Now we go through a conditional loop to sort each character in the message
    into a type. We go through the whole message char by char, checking and 
    incrementing the counts by 1 using the ascii chart to check what the char 
    is, breaking if the message is null so the program is more efficient and
    won't check the whole 280 characters if a null appears first. Each for loop
    iteration also adds 1 to msgLen so that we know how long the message is for
    the next loop when checking the most common character*/
    for(int i=0; i<280; i++){
        if ((message[i] > 47) && (message[i] < 58)) numCount++;
        else if ((message[i] > 96) && (message[i] < 123)) lowerCount++;
        else if ((message[i] > 64) && (message[i] < 91)) upperCount++;
        else if ((message[i] == 32) || (message[i] == 9)) {
            whitespaceCount++;
            nonAlphaCount++;
        }
        else if (message[i] == 0) break;
        else nonAlphaCount++;
        msgLen++;
    }
    
    // Here we use a nested loop
    for(int i=0; i<msgLen; i++){
        /* In the inner loop we move across the message, comparing a letter at 
        a time to all the other letters in the message. If a letter is already 
        present in the holder array then it breaks and moves onto the next char
        in the outer loop to avoid repetition, whilst marking holderFlag as 1. 
        If not and the letter is the same as the other letter in the array
        then the compAmt increases by 1 and it moves on, otherwise it only moves 
        the next character*/
        for(int j=0; j<msgLen; j++){
            if (message[i] == holder[j]) {
                holderFlag = 1;
                break;
            }
            else if (message[i] == message[j]) compAmt++;
            else continue;
        }
        /* If the inner for loop has finished and the holderFlag is 0 then this
        letter gets added to the holder array at the holder position which then
        increments. */
        if (holderFlag == 0){
            holder[holderPos] = message[i];
            holderPos++;
        }
        // holderFlag is then set to 0 for the next loop if it isn't already
        else{
            holderFlag = 0;
        }
        /* If the compAmt is greater than the mostCommonAmt then this letter is
        input into the mostcommon variable and the mostCommonAmt is set to the
        compAmt for later comparison, otherwise it just resets the compAmt ready
         for the next loop*/
        if (compAmt > mostCommonAmt){
            mostCommon = message[i];
            mostCommonAmt = compAmt;
            compAmt = 0;
        }
        else{
            compAmt = 0;
        }
    }
    
    // All of the important statements are printed
    printf("In this tweet we have:\r\n");
    printf("%d Whitespace character(s)\r\n", whitespaceCount);
    printf("%d number(s)\r\n", numCount);
    printf("%d lower case letter(s)\r\n", lowerCount);
    printf("%d upper case letter(s)\r\n", upperCount);
    printf("%d non-Alphanumeric and whitespace character(s)\r\n", nonAlphaCount);
    printf("And your most used character is %c\r\n", mostCommon);
    return 0;
}