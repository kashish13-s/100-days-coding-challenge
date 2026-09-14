#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input! Please enter a positive integer.\n");
    } 
    else {
        // Calculate sum of first n odd numbers
        for (int i = 1; i <= n; i++) {
            sum += (2 * i - 1);  // odd numbers: 1, 3, 5, ...
        }

        // Display result
        printf("Sum of first %d odd numbers = %d\n", n, sum);
    }

    return 0;
}
