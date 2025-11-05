#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    scanf("%s", str); // Reads a single word (no spaces)

    // Traverse until null terminator
    while (str[count] != '\0') {
        count++;
    }

    printf("Number of characters: %d\n", count);

    return 0;
}