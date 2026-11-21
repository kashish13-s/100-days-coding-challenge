#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int nums[n];
    int seen[1000] = {0};

    printf("Enter the elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);

        if (seen[nums[i]] == 1)
        {
            printf("%d\n", nums[i]);
            return 0;
        }

        seen[nums[i]] = 1;
    }

    printf("No repeated element\n");

    return 0;
}
