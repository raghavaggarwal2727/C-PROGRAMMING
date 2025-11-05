#include <stdio.h>

int main() {
    int nums[100], answer[100], left[100], right[100];
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Build left product array
    left[0] = 1;
    for (int i = 1; i < n; i++) {
        left[i] = left[i - 1] * nums[i - 1];
    }

    // Build right product array
    right[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        right[i] = right[i + 1] * nums[i + 1];
    }

    // Build answer array
    for (int i = 0; i < n; i++) {
        answer[i] = left[i] * right[i];
    }

    // Print result
    printf("Product array: ");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1) printf(", ");
    }
    printf("\n");

    return 0;
}