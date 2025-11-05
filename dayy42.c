#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a lowercase string: ");
    scanf("%s", str); // Use fgets() for full sentences

    // Convert to uppercase manually
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // ASCII shift
        }
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}