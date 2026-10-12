#include <stdio.h>

int main() {
    char str[100];
    printf("Enter full name: ");
    fgets(str, sizeof(str), stdin);

    printf("Result: ");
    for(int i=0; str[i]!='\0'; i++) {
        if(i==0 || str[i-1]==' ') {
            if(str[i] != '\n')
                printf("%c. ", str[i]);
        }
    }

    // Print surname fully
    int lastSpace = -1;
    for(int i=0; str[i]!='\0'; i++) {
        if(str[i]==' ')
            lastSpace = i;
    }
    if(lastSpace != -1) {
        for(int i=lastSpace+1; str[i]!='\0' && str[i]!='\n'; i++)
            printf("%c", str[i]);
    }
    return 0;
}
