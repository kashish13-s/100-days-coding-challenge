#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    printf("Previous greater elements:\n");
    for(int i=0; i<n; i++) {
        int prev=-1;
        for(int j=i-1; j>=0; j--) {
            if(arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }
        printf("%d ", prev);
    }
    return 0;
}
