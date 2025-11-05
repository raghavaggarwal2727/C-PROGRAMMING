#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert entire string to lowercase
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    // Capitalize first character if it's a letter
    if (isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    // Capitalize letter after '.', '!', or '?'
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?') {
            // Skip spaces
            int j = i;
            while (str[j] == ' ' && str[j] != '\0') {
                j++;
            }
            if (isalpha(str[j])) {
                str[j] = toupper(str[j]);
            }
        }
    }

    printf("Sentence case: %s", str);
    return 0;
}