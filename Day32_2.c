#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};

    printf("Enter an integer: ");
    scanf("%lld", &n);

    while (n != 0) {
        int digit = n % 10;
        freq[digit]++;
        n /= 10;
    }

    int maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (freq[i] > freq[maxDigit]) maxDigit = i;
    }

    printf("Digit occurring most times = %d\n", maxDigit);
    return 0;
}
