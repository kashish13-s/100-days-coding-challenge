#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    int sum=0;
    for(int i=0; i<k; i++) sum += arr[i];
    int maxSum = sum;

    for(int i=k; i<n; i++) {
        sum += arr[i] - arr[i-k]; // sliding window
        if(sum > maxSum) maxSum = sum;
    }

    printf("Maximum sum of subarray of size %d = %d\n", k, maxSum);
    return 0;
}
