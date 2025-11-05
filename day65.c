#include <stdio.h>
#include <string.h>

int isAnagram(char s[], char t[]) {
    if (strlen(s) != strlen(t))
        return 0;

    int freq[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0)
            return 0;
    }

    return 1;
}

int main() {
    char s[1000], t[1000];

    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    if (isAnagram(s, t))
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}