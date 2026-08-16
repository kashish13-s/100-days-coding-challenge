#include<stdio.h>
int main() 
{ 
    float Celsius, Fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &Celsius);
    Fahrenheit = (Celsius * 9/5) + 32;
    printf("Temperature in Fahrenheit: %.2f", Fahrenheit);
    return 0;
}
