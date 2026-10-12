#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int spaces=0, digits=0, specials=0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            spaces++;
        else if(isdigit(str[i]))
            digits++;
        else if(!isalpha(str[i]) && str[i] != '\n')
            specials++;
    }

    printf("Spaces=%d, Digits=%d, Specials=%d\n", spaces, digits, specials);
    return 0;
}
