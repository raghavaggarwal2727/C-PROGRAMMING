#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isRotation(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) return false;

    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1); // Concatenate str1 with itself

    return strstr(temp, str2) != NULL; // Check if str2 is a substring
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (isRotation(str1, str2))
        printf("Yes, the second string is a rotation of the first.\n");
    else
        printf("No, the second string is not a rotation of the first.\n");

    return 0;
}