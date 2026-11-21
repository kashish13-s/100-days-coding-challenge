#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int nums[n];
    int actualSum = 0;

    printf("Enter the elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        actualSum = actualSum + nums[i];
    }

    // Sum of numbers from 0 to n
    int expectedSum = n * (n + 1) / 2;

    // Missing number
    int missing = expectedSum - actualSum;

    printf("%d\n", missing);

    return 0;
}
