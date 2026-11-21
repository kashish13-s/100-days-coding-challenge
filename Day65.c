#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], t[100];
    int count[26] = {0};

    printf("Enter first string: ");
    scanf("%99s", s);

    printf("Enter second string: ");
    scanf("%99s", t);

    // If lengths are different, they cannot be anagrams
    if (strlen(s) != strlen(t))
    {
        printf("Not Anagram\n");
        return 0;
    }

    // Count characters of s
    for (int i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
    }

    // Subtract characters of t
    for (int i = 0; t[i] != '\0'; i++)
    {
        count[t[i] - 'a']--;
    }

    // Check whether all frequencies became 0
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");

    return 0;
}
