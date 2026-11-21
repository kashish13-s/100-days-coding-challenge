#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int maxLength = 0;

    printf("Enter the string: ");
    scanf("%99s", s);

    int n = strlen(s);

    for (int i = 0; i < n; i++)
    {
        int visited[256] = {0};
        int length = 0;

        for (int j = i; j < n; j++)
        {
            unsigned char ch = (unsigned char)s[j];

            if (visited[ch] == 1)
            {
                break;
            }

            visited[ch] = 1;
            length++;

            if (length > maxLength)
            {
                maxLength = length;
            }
        }
    }

    printf("%d\n", maxLength);

    return 0;
}
