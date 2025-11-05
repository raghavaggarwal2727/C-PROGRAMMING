#include <stdio.h>

void deleteElement(int arr[], int *n, int element) {
    int pos = -1;

    // Find the position of the element
    for (int i = 0; i < *n; i++) {
        if (arr[i] == element) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Element not found!\n");
        return;
    }

    // Shift elements to the left
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--; // Reduce array size
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int element = 30;

    deleteElement(arr, &n, element);

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}