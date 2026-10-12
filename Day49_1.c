#include <stdio.h>

int main() {
    char str[100];
    printf("Enter full name: ");
    fgets(str, sizeof(str), stdin);

    printf("Initials: ");
    for(int i=0; str[i]!='\0'; i++) {
        if(i==0 || str[i-1]==' ')
            if(str[i] != '\n')
                printf("%c ", str[i]);
    }
    return 0;
}
