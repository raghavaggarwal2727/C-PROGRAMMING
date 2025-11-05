#include <stdio.h>

void insertAtPosition(int arr[], int *n, int element, int position) {
    if (position < 0 || position > *n) {
        printf("Invalid position!\n");
        return;
    }

    // Shift elements to the right
    for (int i = *n - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the element
    arr[position] = element;
    (*n)++; // Increase array size
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50}; // Initial array
    int n = 5; // Current size
    int element = 25;
    int position = 2; // Insert at index 2

    insertAtPosition(arr, &n, element, position);

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}