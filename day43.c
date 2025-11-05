#include <stdio.h>

int main() {
    char str[100];
    int start = 0, end;

    printf("Enter a string: ");
    scanf("%s", str); // Use fgets() for full sentences

    // Find string length manually
    for (end = 0; str[end] != '\0'; end++);

    end--; // Adjust to last character index

    // Reverse in-place using two-pointer technique
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}