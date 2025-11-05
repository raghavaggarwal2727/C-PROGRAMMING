#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i = 0, wordStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); // Reads full line including spaces

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n') {
            reverseWord(str, wordStart, i - 1); // Reverse current word
            wordStart = i + 1; // Move to next word
        }
        i++;
    }

    // Final word (if sentence doesn't end with space)
    reverseWord(str, wordStart, i - 1);

    printf("Modified sentence: %s\n", str);

    return 0;
}