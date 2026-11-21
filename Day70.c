#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Capitalize the first character
    if (str[0] != '\0')
    {
        str[0] = toupper(str[0]);
    }

    // Capitalize every character that comes after a space
    for (int i = 1; str[i] != '\0'; i++)
    {
        if (str[i - 1] == ' ')
        {
            str[i] = toupper(str[i]);
        }
    }

    printf("%s", str);

    return 0;
}
