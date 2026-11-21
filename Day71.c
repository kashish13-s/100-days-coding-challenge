#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int age;

    // Open file in write mode
    fp = fopen("info.txt", "w");

    if (fp == NULL)
    {
        printf("Error creating file!\n");
        return 1;
    }

    // Take input from user
    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write data into file
    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    // Close the file
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
