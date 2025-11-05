#include <stdio.h>

int main() {
    int arr[100], freq[100] = {0};
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements (one repeated): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Check if already seen
        if (freq[arr[i]] == 1) {
            printf("Repeated element: %d\n", arr[i]);
            return 0;
        }

        freq[arr[i]] = 1;
    }

    // If no repetition found
    printf("No repeated element found.\n");
    return 0;
}