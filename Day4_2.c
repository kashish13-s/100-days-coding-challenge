#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    // Calculate sum using loop
    for (int i = 1; i <= n; i++) {
        sum += i;  // add each number to sum
    }
    // Display result
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}
