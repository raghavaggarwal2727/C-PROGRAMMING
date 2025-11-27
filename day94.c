//Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function to print student details
void display(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.0f\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s;

    printf("Enter student details:\n");
    printf("Name: ");
    scanf("%s", s.name);
    printf("Roll: ");
    scanf("%d", &s.roll);
    printf("Marks: ");
    scanf("%f", &s.marks);

    // Call function with structure as parameter
    display(s);

    return 0;
}
