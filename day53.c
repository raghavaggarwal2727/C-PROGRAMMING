#include <stdio.h>

int findPivotIndex(int arr[], int size) {
    int total = 0, leftSum = 0;

    // Calculate total sum
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }

    // Traverse to find pivot index
    for (int i = 0; i < size; i++) {
        int rightSum = total - leftSum - arr[i];
        if (leftSum == rightSum) {
            return i; // Found pivot
        }
        leftSum += arr[i];
    }

    return -1; // No pivot found
}

int main() {
    int arr[100], size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int pivot = findPivotIndex(arr, size);

    printf("Pivot index: %d\n", pivot);

    return 0;
}