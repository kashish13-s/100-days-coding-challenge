#include <stdio.h>
int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Display before swapping
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);
    a = a + b;  // sum of both
    b = a - b;  // (a+b) - b = a
    a = a - b;  // (a+b) - a = b

    // Display after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
