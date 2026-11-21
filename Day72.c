#include <stdio.h>

int main()
{
    FILE *fp;
    char line[100];

    // Open the file in read mode
    fp = fopen("info.txt", "r");

    // Check if the file exists
    if (fp == NULL)
    {
        printf("Error! File not found.\n");
        return 1;
    }

    // Read and print each line until EOF
    while (fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return 0;
}
