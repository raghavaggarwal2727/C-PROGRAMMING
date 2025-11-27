//Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date join;
};

int main() {
    struct Employee e;

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &e.join.day, &e.join.month, &e.join.year);

    printf("\nName: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           e.name, e.id, e.join.day, e.join.month, e.join.year);

    return 0;
}
