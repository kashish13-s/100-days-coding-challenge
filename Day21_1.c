#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;
    digits = (int)log10(n);
    first = n / (int)pow(10, digits);

    int middle = n % (int)pow(10, digits);
    middle /= 10;

    int swapped = last * (int)pow(10, digits) + middle * 10 + first;

    printf("Number after swapping first and last digit = %d\n", swapped);
    return 0;
}
