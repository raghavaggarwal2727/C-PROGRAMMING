//Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e, e_read;
    FILE *fp;

    // Input employee details
    printf("Enter Employee Details:\n");
    printf("Name: ");
    scanf("%s", e.name);
    printf("ID: ");
    scanf("%d", &e.id);
    printf("Salary: ");
    scanf("%f", &e.salary);

    // Write to binary file
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("File cannot be opened!\n");
        return 1;
    }
    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Read from binary file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("File cannot be opened!\n");
        return 1;
    }
    fread(&e_read, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Display result
    printf("\n--- Data Read from File ---\n");
    printf("Name: %s\nID: %d\nSalary: %.2f\n",
           e_read.name, e_read.id, e_read.salary);

    return 0;
}
