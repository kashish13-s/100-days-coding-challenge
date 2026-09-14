#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input! Please enter a positive integer.\n");
    } 
    else {
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n"); 
    }

    return 0;
}
