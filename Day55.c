#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    int majority=-1;
    for(int i=0; i<n; i++) {
        int count=0;
        for(int j=0; j<n; j++) {
            if(arr[j]==arr[i]) count++;
        }
        if(count > n/2) {
            majority = arr[i];
            break;
        }
    }

    if(majority==-1) printf("-1 (No majority element)\n");
    else printf("Majority element = %d\n", majority);

    return 0;
}
