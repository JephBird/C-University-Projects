// Definition to prevent warning in VS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main()
{
    // float 2d array for the provided information
    float robots[4][5] = {{1, 4.5, 5.6, 12.7, 495.99}, {2, 5.6, 8.9, 8.2, 599.95},
                    {3, 2.1, 14.6, 6.5, 399.95}, {4, 7.9, 6.4, 3.4, 749.65}};
    
    /* Initialising ints: ValLocs are for the array location of the minimum and
    maximum robots for comparison, input is for the user's input in the menu,
    end is a marker to close the menu and end the program, changeChoice is for
    the value they want to change and floatToInt is to take an integer value from
    a float without truncating the value, as different IDEs and compilers seem
    to do different things here, used in hour to minute conversion */
    int maxValLoc, minValLoc, robotNum, column, input, end, changeChoice, floatToInt;
    maxValLoc = minValLoc = robotNum = column = input = end = changeChoice = floatToInt = 0;
    
    /* initialising floats: average is for avarage values, the Val ones are for
    the maximum and minimums, changeValue is for when the value is being changed,
    and minutes is for the hours to minutes conversion */
    float average, maxVal, minVal, changeValue, minutes;
    average = maxVal = minVal = changeValue = minutes = 0;
    
    /* printing the details of the robots with a for loop for the initial menu 
    step to give the user something to look at */
    printf("The initial details of the 4 robots are:\r\n");
    for (int i = 0; i<4; i++){
        floatToInt = robots[i][3];
        /* using floatToInt to convert the decimal place of the hours to minutes
         and floor is used to round down the hours value of time */
        minutes = (robots[i][3] - floatToInt)*60;
        printf("Robot %.0f: Speed %.2fm/s | Weight %.2fKg | Max. Run-Time %.0f Hours and %.02f Minutes | Price £%.2f\r\n",
        robots[i][0], robots[i][1], robots[i][2], floor(robots[i][3]), minutes, robots[i][4]); 
    }
    
    /* While loop starts and prints the menu at each iteration so the user 
    doesn't have to scroll so far, user is provided with options and must enter 
    a number */
    while (end == 0){
        printf("\r\n\r\nIf you wish to:\r\n");
        printf("Change the details of a robot type '1'\r\n");
        printf("Find the fastest and slowest robots type '2'\r\n");
        printf("Find the heaviest and lightest robots type '3'\r\n");
        printf("Find the robots with the best and worst maximum run-time type '4'\r\n");
        printf("Find the cheapest and most expensive robots type '5'\r\n");
        printf("The average speed of all robots type '6'\r\n");
        printf("The average weight of all robots type '7'\r\n");
        printf("The average run-time of all robots type '8'\r\n");
        printf("The average price of all robots type '9'\r\n");
        printf("View all of the details of a robot type '10'\r\n");
        printf("Leave the menu and close the program type '0'\r\n\r\n");
        
        // Scanf takes a number from the user
        scanf("%d", &input);
        
        // We go through a case system to determine what happens next
        switch(input){
            /* if 0 this causes the statement to end and the while loop too, 
            exiting the program */
            case 0:{
                end = 1;
                break;
            }
            /* if 1 then it prompt the user to input a number and then a value
            of the robot and value they want to change */
            case 1:{
                //First we output the numbers of the robots for the user
                printf("\n1 = Robot %.0f, 2 = Robot %.0f, 3 = Robot %.0f, 4 = Robot %.0f\r\n",
                robots[0][0], robots[1][0], robots[2][0], robots[3][0]);
                // We then ask the user which robot they wish to change
                printf("Please input the number of the robot you wish to change: ");
                // we use a while loop to ensure the user chooses a valid number
                while ((robotNum <1) || (robotNum>5)){
                    scanf("%d", &robotNum);
                    if ((robotNum <1) || (robotNum>5)){
                        printf("Please input a number between 1 and 4\r\n");
                    }
                }

                // we then take the value of the attribute they want to change
                printf("\r\n1 = Robot Number , 2 = Speed, 3 = Weight, 4 = Max. Run-Time, 5 = Price\r\n");
                printf("Please input the number of the value you wish to change: ");
                
                // we use a while loop to ensure the user chooses a valid number
                while ((changeChoice <1) || (changeChoice>5)){
                    scanf("%d", &changeChoice);
                    if ((changeChoice <1) || (changeChoice>5)){
                        printf("Please input a number between 1 and 5\r\n");
                    }
                }
                /* here it checks if the user selected to change time and if so
                will prompt them for hours and minutes instead of a single value
                for user ease */
                if (changeChoice == 4){
                    printf("\r\nPlease enter the amount of Hours of the new runtime: ");
                    scanf("%f", &changeValue);  
                    printf("\r\nPlease enter the amount of Minutes of the new runtime: ");
                    scanf("%f", &minutes);
                    /* we add the hours to the value for minutes divided by 60
                    to save it as a single hourly value in the array */
                    changeValue = changeValue + (minutes/60);
                }
                // If they don't choose time then it just asks them for a single value
                else{
                    printf("\r\nPlease enter the value you would like to replace this amount with: ");
                    scanf("%f", &changeValue);   
                }
                // We then action this change and confirm completion
                robots[(robotNum-1)][(changeChoice-1)] = changeValue; 
                printf("\r\nThis value has now been changed to %f.", changeValue);
                // We reset robotNum and changeChoice to 0 for the while loops
                robotNum = changeChoice = 0;
                break;
            }
            // Here we find the fastest and slowest robots
            case 2:{
                // First we initialise the below values
                maxVal = robots[0][1];
                minVal = robots[0][1];
                maxValLoc = 0;
                minValLoc = 0;
                /* This for loop checks each robot's value against the current 
                minimum and maximum to see if it needs replacing and then 
                assigns both the location and value to this new one. If it does 
                not beat the current value then it skips */
                for (int i = 1; i<4; i++){
                    if (robots[i][1] > maxVal){
                        maxVal = robots[i][1];
                        maxValLoc = i;
                    }
                    else if ((robots[i][1] < minVal)){
                        minVal = robots[i][1];
                        minValLoc = i;
                    }
                    else{
                        continue;
                    }
                }
                // The results are then printed
                printf("\r\nThe fastest robot is Robot %.0f with a speed of %.2fm/s.\r\n"
                , robots[maxValLoc][0], robots[maxValLoc][1]);
                printf("The slowest robot is Robot %.0f with a speed of %.2fm/s.\r\n"
                , robots[minValLoc][0], robots[minValLoc][1]);
                break;
            }
            /* Here we find the heaviest and lightest robots, check case 2 for 
            instructions due to similarity */
            case 3:{
                maxVal = robots[0][2];
                minVal = robots[0][2];
                maxValLoc = 0;
                minValLoc = 0;
                
                for (int i = 1; i<4; i++){
                    if (robots[i][2] > maxVal){
                        maxVal = robots[i][2];
                        maxValLoc = i;
                    }
                    if ((robots[i][2] < minVal)){
                        minVal = robots[i][2];
                        minValLoc = i;
                    }
                }
                printf("\r\nThe heaviest robot is Robot %.0f with a weight of %.2fKg.\r\n"
                , robots[maxValLoc][0], robots[maxValLoc][2]);
                printf("The lightest robot is Robot %.0f with a weight of %.2fKg.\r\n"
                , robots[minValLoc][0], robots[minValLoc][2]);
                break;
            }
            /* Here we find the robots with the best and worst run-times, check 
            case 2 for instructions due to similarity */
            case 4:{
                maxVal = robots[0][3];
                minVal = robots[0][3];
                maxValLoc = 0;
                minValLoc = 0;
                
                for (int i = 1; i<4; i++){
                    if (robots[i][3] > maxVal){
                        maxVal = robots[i][3];
                        maxValLoc = i;
                    }
                    if ((robots[i][3] < minVal)){
                        minVal = robots[i][3];
                        minValLoc = i;
                    }
                }
                floatToInt = robots[maxValLoc][3];
                minutes = (robots[maxValLoc][3] - floatToInt)*60;
                printf("\r\nThe robot with the best run-time is Robot %.0f with a runtime of %.0f Hours and %.2f Minutes.\r\n"
                , robots[maxValLoc][0], floor(robots[maxValLoc][3]), minutes);
                floatToInt = robots[minValLoc][3];
                minutes = (robots[minValLoc][3] - floatToInt)*60;
                printf("The robot with the worst run-time is Robot %.0f with a runtime of %.0f Hours and %.2f Minutes.\r\n"
                , robots[minValLoc][0], floor(robots[minValLoc][3]), minutes);
                break;
            }
            /* Here we find the most and least expensive robots, check case 2 
            for instructions due to similarity */
            case 5:{
                maxVal = robots[0][4];
                minVal = robots[0][4];
                maxValLoc = 0;
                minValLoc = 0;
                
                for (int i = 1; i<4; i++){
                    if (robots[i][4] > maxVal){
                        maxVal = robots[i][4];
                        maxValLoc = i;
                    }
                    if ((robots[i][4] < minVal)){
                        minVal = robots[i][4];
                        minValLoc = i;
                    }
                }
                printf("\nThe most expensive robot is Robot %.0f with a price of £%.2f.\r\n"
                , robots[maxValLoc][0], robots[maxValLoc][4]);
                printf("The least expensive robot is Robot %.0f with a price of £%.2f.\r\n"
                , robots[minValLoc][0], robots[minValLoc][4]);
                break;
            }
            // Here we find the average speed of the robots
            case 6:{
                // We reset the average in case it was used previously
                average = 0;
                // We then add up all of the values in a for loop
                for (int i = 0; i<4; i++){
                    average = average + robots[i][1];
                }
                /* After this we divide by the number of robots to get the 
                average before printing */
                average = average/4;
                printf("\r\nThe average speed of the robots is %.2fm/s.", average);
                break;
            }
            /* Here we find the average weight of the robots, check case 6 
            for instructions due to similarity */
            case 7:{
                average = 0;
                for (int i = 0; i<4; i++){
                    average = average + robots[i][2];
                }
                average = average/4;
                printf("\r\nThe average weight of the robots is %.2fKg.", average);
                break;
            }
            /* Here we find the average runtime of the robots, check case 6 
            for instructions due to similarity */
            case 8:{
                average = 0;
                for (int i = 0; i<4; i++){
                    average = average + robots[i][3];
                }
                average = average/4;
                floatToInt = average;
                minutes = (average - floatToInt)*60;
                printf("\r\nThe average run-time of the robots is %.0f Hours and %.2f Minutes", floor(average), minutes);
                break;
            }
            /* Here we find the average price of the robots, check case 6 
            for instructions due to similarity */
            case 9:{
                average = 0;
                for (int i = 0; i<4; i++){
                    average = average + robots[i][4];
                }
                average = average/4;
                printf("\r\nThe average price of the robots is £%.2f", average);
                break;
            }
            // Here we print the details of the selected robot
            case 10:{
                /* We print the numbers and positions of the robots and ask the
                user to input to select the robot */
                printf("\r\n1 = Robot %.0f, 2 = Robot %.0f, 3 = Robot %.0f, 4 = Robot %.0f\r\n",
                robots[0][0], robots[1][0], robots[2][0], robots[3][0]);
                printf("Please input the number to the left of the robot you wish to bring up the details of: ");
                while ((robotNum <1) || (robotNum>5)){
                    scanf("%d", &robotNum);
                    if ((robotNum <1) || (robotNum>5)){
                        printf("\r\nPlease input a number between 1 and 4");
                    }
                }
                
                // We then print the details of the robot
                floatToInt = robots[robotNum-1][3];
                minutes = (robots[robotNum-1][3] - floatToInt)*60;
                printf("\r\nRobot %.0f: Speed %.2fm/s | Weight %.2fKg | Max. Run-Time %.0f Hours and %.02f Minutes | Price %.2f\r\n",
                robots[(robotNum-1)][0], robots[(robotNum-1)][1], robots[(robotNum-1)][2], floor(robots[(robotNum-1)][3]), minutes, robots[(robotNum-1)][4]);
                robotNum = changeChoice = 0;
                break;
            }
            // If the user prints anything else this resets
            default :{
                printf("Please enter a number from 0-10\r\n");
                break;
            }
        }
    }
    // Once the user exits the while loop this is printed and the program ends
    printf("\r\nHave a nice day!");
    return 0;
}
