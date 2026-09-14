#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (double)(2 * i) / (4 * i - 1);  // numerator = 2i, denominator = 4i - 1
    }

    printf("Sum of series up to %d terms = %.4lf\n", n, sum);
    return 0;
}
