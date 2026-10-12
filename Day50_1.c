#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    char month[][4] = {"Jan","Feb","Mar","Apr","May","Jun",
                       "Jul","Aug","Sep","Oct","Nov","Dec"};

    char dd[3], mm[3], yyyy[5];
    strncpy(dd, date, 2); dd[2]='\0';
    strncpy(mm, date+3, 2); mm[2]='\0';
    strncpy(yyyy, date+6, 4); yyyy[4]='\0';

    int m = atoi(mm);
    printf("Formatted date: %s-%s-%s\n", dd, month[m-1], yyyy);
    return 0;
}
