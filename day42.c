#include <stdio.h>
#include <ctype.h> // For tolower()

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf("%s", str); // Use fgets() for full sentences

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Normalize to lowercase

        if ((ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}