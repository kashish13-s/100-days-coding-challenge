#include<stdio.h> 
// In this program we will calculate the area of rectangle and perimeter of rectangle.
    int main ()
    {
    float length, breadth, Perimeter, area;
    printf("Enter the value of length: ");
    scanf("%f", &length);
    printf("Enter the value of the breath: ");
    scanf( "%f", &breadth);
    Perimeter = 2* (length+ breadth);
    printf("The perimeter of the rectangle is: %.2f\n", Perimeter);
    area= length* breadth;
    printf("The area of the rectangle is: %.2f ", area);

    return 0; 
    }
