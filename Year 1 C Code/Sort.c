// Definition to prevent warning on VS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Prototyping the 3 functions
void floatInput(float *numbers, int arrayLen);
void floatSort(float *numbers, int arrayLen);
void loopPrintf(float *numbers, int arrayLen);

int main ()
{
    // ArrayLen used for loop lengths of the other functions
    int arrayLen = 10;
    // Generate an array set to 0 of 10 numbers
    float numbers[10] = { 0 };
    // Prompt the user for input
    printf ("Please enter your 10 floating point numbers: \r\n");
    // Call function to take the input and assign to an array
    floatInput(numbers, arrayLen);
    
    // Call function to sort the elements in the array
    floatSort(numbers, arrayLen);
    // Finally print the elements with another function
    printf("\r\nYour list in ascending order is:\r\n");
    loopPrintf(numbers, arrayLen);
}

// Function takes an array and uses scanf to set arrayLen elements in the array
void floatInput(float *numbers, int arrayLen)
{
  for (int i = 0; i < arrayLen; i++)
    {
      scanf ("%f", &numbers[i]);
    }
}

// Function takes an array of arrayLen values and sorts it using bubblesort
void floatSort(float *numbers, int arrayLen)
{
    /* First we initialise the values used in the loop. i and j are used for the
    inner loop and temp is used to hold a float during swapping */
    int i, j;
    float temp = 0;
    i = j = 0;
        /* In the for loop we iterate over i an j, with j always being one 
        higher than i, incrementing each but only checking j to end the loop 
        as we don't want to compare with the null space at the end. If i is 
        greater than j then they are switched with temp taking on one of the 
        values to accommodate this. The values for i and j are then decremented 
        by 2 if i is not 0 to compare the recently moved one with the one 
        previous to 'bump' it down the list into its correct position. Once j 
        gets to 10 the for loop exits as this means that it has sorted 
        everything and not hit anything unsorted which would have moved it back 
        down the list. The sorted array is then returned */
    for(i=0, j=1; j<arrayLen; i++,j++){
        if (numbers[i] > numbers[j]){
            temp = numbers[i];
            numbers[i] = numbers[j];
                numbers[j] = temp;
            if (i != 0){
                i = i-2;
                j = j-2;
            }
            else continue;
        }
        else continue;
    }
}

// Function takes an array of arrayLen values and prints its elements
void loopPrintf(float *numbers, int arrayLen){
    for(int i =0; i<arrayLen; i++){
        printf("\r\n%f", numbers[i]);
    }
}