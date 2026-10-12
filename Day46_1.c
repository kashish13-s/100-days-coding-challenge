#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("String without vowels: ");
    for(int i=0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'))
            printf("%c", str[i]);
    }
    return 0;
}
