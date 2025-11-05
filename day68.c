#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter size of array (should be n): ");
    scanf("%d", &n);

    printf("Enter %d elements (from 0 to n, missing one): ", n);
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }

    int expectedSum = n * (n + 1) / 2;
    int missing = expectedSum - actualSum;

    printf("Missing number: %d\n", missing);

    return 0;
}