#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int lastSpace = -1;

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin); // Reads full line including spaces

    printf("Formatted output: ");

    // Print initials
    if (name[0] != ' ' && name[0] != '\n')
        printf("%c. ", name[0]);

    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ' && name[i] != '\n') {
            lastSpace = i - 1;
            printf("%c. ", name[i]);
        }
    }

    // Print surname in full
    if (lastSpace != -1) {
        int i = lastSpace + 1;
        while (name[i] != '\0' && name[i] != '\n') {
            printf("%c", name[i]);
            i++;
        }
    }

    printf("\n");
    return 0;
}