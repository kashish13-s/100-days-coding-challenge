#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[count] != '\0') {
        count++;
    }

    // fgets includes newline, so adjust
    if(str[count-1] == '\n') count--;

    printf("Length of string = %d\n", count);
    return 0;
}
