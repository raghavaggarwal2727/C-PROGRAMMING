#include <stdio.h>
#include <string.h>

int longestUniqueSubstringLength(char s[]) {
    int freq[256] = {0}; // ASCII character frequency
    int maxLen = 0, start = 0;

    for (int end = 0; s[end] != '\0'; end++) {
        freq[(unsigned char)s[end]]++;

        // Shrink window if duplicate found
        while (freq[(unsigned char)s[end]] > 1) {
            freq[(unsigned char)s[start]]--;
            start++;
        }

        int windowLen = end - start + 1;
        if (windowLen > maxLen)
            maxLen = windowLen;
    }

    return maxLen;
}

int main() {
    char s[1000];

    printf("Enter a string: ");
    scanf("%s", s); // Use fgets() if you want to allow spaces

    int result = longestUniqueSubstringLength(s);
    printf("Length of longest substring without repeating characters: %d\n", result);

    return 0;
}