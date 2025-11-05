#include <stdio.h>

int main() {
    char str[200];
    int spaces = 0, digits = 0, specials = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Reads full line including spaces

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if ((str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z') && str[i] != '\n')
            specials++;
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specials);

    return 0;
}