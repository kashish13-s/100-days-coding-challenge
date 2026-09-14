#include <stdio.h>

int main() {
    int n;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    printf("1's Complement = ");
    while (n != 0) {
        int digit = n % 10;
        if (digit == 0)
            printf("1");
        else
            printf("0");
        n /= 10;
    }
    printf("\n");

    return 0;
}
