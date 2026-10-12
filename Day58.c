#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n], answer[n];
    printf("Enter array elements:\n");
    for(int i=0; i<n; i++) scanf("%d", &nums[i]);

    // Prefix products
    int prefix[n], suffix[n];
    prefix[0] = 1;
    for(int i=1; i<n; i++)
        prefix[i] = prefix[i-1] * nums[i-1];

    // Suffix products
    suffix[n-1] = 1;
    for(int i=n-2; i>=0; i--)
        suffix[i] = suffix[i+1] * nums[i+1];

    // Answer = prefix * suffix
    for(int i=0; i<n; i++)
        answer[i] = prefix[i] * suffix[i];

    printf("Answer array: ");
    for(int i=0; i<n; i++) printf("%d ", answer[i]);
    return 0;
}
