//Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function to find topper and return structure
struct Student findTopper(struct Student s[], int n) {
    int i, top = 0;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks) {
            top = i;
        }
    }
    return s[top]; // returning structure
}

int main() {
    struct Student s[100], topper;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Get topper
    topper = findTopper(s, n);

    printf("\nTop Student: %s | Roll: %d | Marks: %.0f\n",
           topper.name, topper.roll, topper.marks);

    return 0;
}
