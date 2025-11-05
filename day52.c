#include <stdio.h>

int findCeilIndex(int arr[], int size, int x) {
    int low = 0, high = size - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            result = mid;      // Potential ceil found
            high = mid - 1;    // Search left half for earlier occurrence
        } else {
            low = mid + 1;     // Search right half
        }
    }

    return result;
}

int main() {
    int arr[100], size, x;

    printf("Enter size of sorted array: ");
    scanf("%d", &size);

    printf("Enter %d sorted elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of x: ");
    scanf("%d", &x);

    int index = findCeilIndex(arr, size, x);

    if (index == -1)
        printf("-1\n");
    else
        printf("Ceil of %d is %d at index %d\n", x, arr[index], index);

    return 0;
}