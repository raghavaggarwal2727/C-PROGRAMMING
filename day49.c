#include <stdio.h>

int main() {
    char name[100];

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin); // Reads full line including spaces

    printf("Initials: ");

    // Print first initial
    if (name[0] != ' ' && name[0] != '\n')
        printf("%c", name[0]);

    // Print initials after spaces
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ' && name[i] != '\n') {
            printf("%c", name[i]);
        }
    }

    printf("\n");
    return 0;
}