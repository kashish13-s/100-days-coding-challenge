#include <stdio.h>

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    enum TrafficLight light;
    int choice;

    printf("Enter 0 for RED, 1 for YELLOW, 2 for GREEN: ");
    scanf("%d", &choice);

    light = choice;

    switch (light)
    {
        case RED:
            printf("Stop\n");
            break;

        case YELLOW:
            printf("Wait\n");
            break;

        case GREEN:
            printf("Go\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
