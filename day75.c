#include <stdio.h>

int main() {
    char filename[100];
    char line[1000];
    FILE *fp;

    // Get filename from user
    printf("Enter filename to append to: ");
    scanf("%s", filename);

    // Clear input buffer before reading line
    getchar();

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }

    // Get line from user
    printf("Enter a line to append: ");
    fgets(line, sizeof(line), stdin);

    // Append line to file
    fputs(line, fp);
    fclose(fp);

    printf("Line appended successfully.\n");
    return 0;
}