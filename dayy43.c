#include <stdio.h>
#include <stdbool.h>

int main() {
    char str[100];
    int start = 0, end;
    bool isPalindrome = true;

    printf("Enter a string: ");
    scanf("%s", str); // Use fgets() for full sentences

    // Find length manually
    for (end = 0; str[end] != '\0'; end++);
    end--; // Adjust to last index

    // Compare characters from both ends
    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    // Result
    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}