#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int total = n*(n+1)/2; // sum of 1..n
    for(int x=1; x<=n; x++) {
        int leftSum = x*(x+1)/2;       // sum 1..x
        int rightSum = total - (x-1)*x/2; // sum x..n
        if(leftSum == rightSum) {
            printf("Pivot integer = %d\n", x);
            return 0;
        }
    }
    printf("-1 (No pivot integer)\n");
    return 0;
}
