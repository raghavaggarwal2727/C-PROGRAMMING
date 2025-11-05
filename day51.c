#include <stdio.h>

// Function to find first occurrence
int firstOccurrence(int nums[], int size, int target) {
    int low = 0, high = size - 1, result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            result = mid;
            high = mid - 1; // Search left half
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

// Function to find last occurrence
int lastOccurrence(int nums[], int size, int target) {
    int low = 0, high = size - 1, result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            result = mid;
            low = mid + 1; // Search right half
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int nums[100], size, target;

    printf("Enter size of sorted array: ");
    scanf("%d", &size);

    printf("Enter %d sorted elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target value: ");
    scanf("%d", &target);

    int first = firstOccurrence(nums, size, target);
    int last = lastOccurrence(nums, size, target);

    if (first == -1)
        printf("-1, -1\n");
    else
        printf("First occurrence at index: %d\nLast occurrence at index: %d\n", first, last);

    return 0;
}