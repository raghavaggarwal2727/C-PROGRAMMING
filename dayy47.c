#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longest[50];
    int maxLen = 0, currLen = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); // Reads full line including spaces

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                strncpy(longest, str + start, currLen);
                longest[currLen] = '\0'; // Null-terminate
            }
            currLen = 0;
            start = i + 1;
        }
        i++;
    }

    // Final word check (in case sentence doesn't end with space)
    if (currLen > maxLen) {
        maxLen = currLen;
        strncpy(longest, str + start, currLen);
        longest[currLen] = '\0';
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}