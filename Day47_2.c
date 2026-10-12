#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int maxLen = 0, currLen = 0, start=0, maxStart=0;
    for(int i=0; str[i]!='\0'; i++) {
        if(str[i] != ' ' && str[i] != '\n') {
            if(currLen == 0) start = i;
            currLen++;
        } else {
            if(currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
        }
    }

    printf("Longest word: ");
    for(int i=maxStart; i<maxStart+maxLen; i++)
        printf("%c", str[i]);
    return 0;
}
