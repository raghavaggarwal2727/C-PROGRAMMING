Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *s;

    // Allocate memory dynamically
    s = (struct Student*) malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input details
    printf("Enter student details:\n");
    printf("Name: ");
    scanf("%s", s->name);
    printf("Roll: ");
    scanf("%d", &s->roll);
    printf("Marks: ");
    scanf("%f", &s->marks);

    // Display student details
    printf("Name: %s | Roll: %d | Marks: %.0f\n", s->name, s->roll, s->marks);

    // Free allocated memory
    free(s);

    return 0;
}
