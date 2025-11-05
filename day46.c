#include <stdio.h>
#include <ctype.h> // For tolower()

int main() {
    char str[200];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Reads full line including spaces

    // Remove vowels in-place
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            str[j++] = str[i]; // Keep non-vowel
        }
    }
    str[j] = '\0'; // Null-terminate the modified string

    printf("String without vowels: %s\n", str);

    return 0;
}