#include <stdio.h>

int main()
{
    FILE *fp;
    int num;
    int sum = 0;
    int count = 0;
    float average;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL)
    {
        printf("File not found!\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1)
    {
        sum = sum + num;
        count++;
    }

    fclose(fp);

    if (count > 0)
    {
        average = (float)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    }
    else
    {
        printf("No numbers found in the file.\n");
    }

    return 0;
}
