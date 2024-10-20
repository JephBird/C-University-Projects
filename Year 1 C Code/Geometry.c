#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float areaOfCircle(float radius);
float volumeOfCylinder(float area, float height);

int main()
{
    while(1)
    {
        float radius, height;
        float area, volume;
        printf("Please enter radius of circle : ");
        scanf("%f", &radius);
        printf("\r\n");
        printf("Now please enter the height of the cylinder :");
        scanf("%f", &height);
        printf("\r\n");
        area = areaOfCircle(radius);
        volume = volumeOfCylinder(area, height);
        
        printf("The area of the circle is %f", area);
        printf("\r\n");
        printf("The volume of the cylinder is %f", volume);
        printf("\r\n \r\n");
    }
}

float areaOfCircle(float radius){
    return 3.142*radius*radius;
}

float volumeOfCylinder(float area, float height){
    return area*height;
}