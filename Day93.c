#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

int main()
{
    struct Student s[5];
    int top = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    for (int i = 1; i < 5; i++)
    {
        if (s[i].marks > s[top].marks)
        {
            top = i;
        }
    }

    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", s[top].name);
    printf("Roll Number: %d\n", s[top].roll_no);
    printf("Marks: %.2f\n", s[top].marks);

    return 0;
}
