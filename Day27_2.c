#include <stdio.h>

int main() {
    int n = 7; // fixed rows for this pattern

    for (int i = 1; i <= n; i++) {
        int stars;
        if (i <= 2) stars = i;          // first two rows
        else if (i == 3) stars = 5;     // third row
        else if (i == 4) stars = 7;     // fourth row
        else if (i == 5) stars = 5;     // fifth row
        else if (i == 6) stars = 3;     // sixth row
        else stars = 1;                 // last row

        for (int j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
