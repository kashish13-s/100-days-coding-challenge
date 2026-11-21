#include <stdio.h>

int main()
{
    int n, k;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    // Check every subarray of size k
    for (int i = 0; i <= n - k; i++)
    {
        int found = 0;

        // Search for first negative number in current window
        for (int j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }

        // If no negative number was found
        if (found == 0)
        {
            printf("0 ");
        }
    }

    return 0;
}
