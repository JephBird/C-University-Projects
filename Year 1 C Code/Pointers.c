#include <stdio.h>

int main()
{
    int robotParameters[6][5] = { {1, 2, 3, 4, 5}, {2, 4, 6, 8, 10}, {102, 104, 106, 654, 23}, {986, 345, 234, 12, 56}, {24, 76, 8, 345, 23},{45,65,888,16,12} };
    int *pRobot;
    pRobot = robotParameters;

    printf("%d\n",*pRobot); //Treats pRobot as a pointer so returns what it points to
    printf("%d\n",robotParameters[3][2]); // Uses an array as normal
    printf("%d\n",*robotParameters[2]); // Takes the value pointed at by the first part of row 3
    printf("%d\n",*(pRobot = pRobot+10)); // As the addition is inside moves 10 ints to the right of pRobot pointer
    printf("%d\n",*(pRobot) +10); // Takes the pointer's value and adds 10 to it

    return 0;
}
