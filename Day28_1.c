#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d:\n", n);
    for (int num = 2; num <= n; num++) {
        int flag = 1;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                flag = 0;
                break;
            }
        }
        if (flag) printf("%d ", num);
    }
    printf("\n");
    return 0;
}
