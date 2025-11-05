#include <stdio.h>

int main() {
    char str[200], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Reads full line including spaces

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    // Count frequency
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Frequency of '%c': %d\n", ch, count);

    return 0;
}