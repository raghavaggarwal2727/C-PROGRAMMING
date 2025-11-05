#include <stdio.h>
#include <limits.h> // For INT_MIN

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return INT_MIN;
    }

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("No second largest element found (all elements may be equal).\n");
        return INT_MIN;
    }

    return second;
}

int main() {
    int arr[] = {10, 20, 5, 20, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, n);

    if (secondLargest != INT_MIN) {
        printf("Second largest element: %d\n", secondLargest);
    }

    return 0;
}