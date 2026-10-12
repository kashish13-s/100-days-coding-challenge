#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    int total=0;
    for(int i=0; i<n; i++) total += arr[i];

    int leftSum=0;
    for(int i=0; i<n; i++) {
        if(leftSum == total - leftSum - arr[i]) {
            printf("Pivot index = %d\n", i);
            return 0;
        }
        leftSum += arr[i];
    }

    printf("-1 (No pivot index)\n");
    return 0;
}
