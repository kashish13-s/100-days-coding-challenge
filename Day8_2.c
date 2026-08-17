#include<stdio.h>
int main() {
    float a, b, c;
    printf("Enter the first number : ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);
    printf("Enter the third number: ");
    scanf("%f", &c);
    if ( a>b && a>c ) {
        printf("a is the largest number : %f\n", a);
    }
    else if (b>a && b>c) {
        printf("b is the largest number : %f\n", b);
    }
    else if (c>a && c>b) {
        printf("c is the largest number : %f\n", c);
    }
    return 0;
}
