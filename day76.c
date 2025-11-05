#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    char ch;

    // Ask for filename
    printf("Enter filename to open: ");
    scanf("%s", filename);

    // Try to open in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File '%s' does not exist or cannot be opened.\n", filename);
        return 1;
    }

    // Read and display content
    printf("File content:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}