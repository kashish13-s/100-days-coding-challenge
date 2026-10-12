#include <stdio.h>

int main() {
    int n, target;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted array elements:\n");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    int first=-1, last=-1;
    for(int i=0; i<n; i++) {
        if(arr[i]==target) {
            if(first==-1) first=i;
            last=i;
        }
    }

    printf("First occurrence index = %d\n", first);
    printf("Last occurrence index = %d\n", last);
    return 0;
}
