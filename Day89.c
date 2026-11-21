#include <stdio.h>

enum Marks
{
    LOW = 10,
    MEDIUM = 50,
    HIGH = 100
};

int main()
{
    enum Marks m1 = LOW;
    enum Marks m2 = MEDIUM;
    enum Marks m3 = HIGH;

    printf("LOW = %d\n", m1);
    printf("MEDIUM = %d\n", m2);
    printf("HIGH = %d\n", m3);

    return 0;
}
