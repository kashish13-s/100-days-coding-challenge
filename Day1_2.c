#include <stdio.h>

int main() {
    int num1, num2, sum, difference, product;
    float quotient;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate sum
    sum = num1 + num2;
    
    // Calculate difference 
    difference = num1 - num2;
    
    // Calculate product
    product = num1 * num2;
    
    // Calculate quotient
    quotient = (float)num1 / num2;


    // Display result
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    printf("Quotient = %.2f\n", quotient);

    return 0;
}
