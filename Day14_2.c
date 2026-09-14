#include <stdio.h>

int main() {
    int n;
    long long product = 1;  // use long long for larger results

    // Input n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No even numbers in the range 1 to %d.\n", n);
    } 
    else {
        // Multiply even numbers from 2 to n
        for (int i = 2; i <= n; i += 2) {
            product *= i;
        }

        // Display result
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    }

    return 0;
}
