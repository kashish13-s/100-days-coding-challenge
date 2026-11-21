#include <stdio.h>

enum Role
{
    ADMIN,
    USER,
    GUEST
};

int main()
{
    enum Role role;
    int choice;

    printf("0. Admin\n");
    printf("1. User\n");
    printf("2. Guest\n");

    printf("Enter your role: ");
    scanf("%d", &choice);

    role = choice;

    switch (role)
    {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome User! You have limited access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! You have view-only access.\n");
            break;

        default:
            printf("Invalid role!\n");
    }

    return 0;
}
