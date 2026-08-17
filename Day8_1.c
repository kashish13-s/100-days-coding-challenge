#include<stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch>= 'A' && ch<= 'Z') {
        printf("It is an Uppercase alphabet %c" , ch);
    }
    else if ( ch>='a' && ch<= 'z') {
        printf("It is a lowercase alphabet %c" , ch);
    }
    else if (ch>= '0' && ch<= '9') {
        printf("It is a digit %c" , ch);
    }
    else {
        printf("It is a special character");
    }
    return 0;
}
