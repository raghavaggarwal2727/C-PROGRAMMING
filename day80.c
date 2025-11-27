//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int n, i;
    FILE *fp;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student records
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Write to file using fprintf
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        fprintf(fp, "%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }
    fclose(fp);


    // Read from file using fscanf
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\n--- Student Records from File ---\n");
    while (fscanf(fp, "%s %d %f", s[i].name, &s[i].roll, &s[i].marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", 
                s[i].name, s[i].roll, s[i].marks);
    }

    fclose(fp);

    return 0;
}
