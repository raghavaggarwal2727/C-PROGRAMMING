#include <stdio.h>

// Define a struct
struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    // Create a struct variable
    struct Student s1 = {101, "Raghav", 88.5};

    // Create a pointer to struct and point it to s1
    struct Student *ptr = &s1;

    // Modify data using -> operator
    ptr->roll = 102;          // update roll
    ptr->marks = 92.0;        // update marks
    // name stays the same here, but you could change it with strcpy if needed

    // Display data using -> operator
    printf("Roll: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}