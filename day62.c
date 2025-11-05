#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSoFar = arr[0];
    int currentMax = arr[0];

    for (int i = 1; i < n; i++) {
        if (currentMax + arr[i] > arr[i])
            currentMax = currentMax + arr[i];
        else
            currentMax = arr[i];

        if (currentMax > maxSoFar)
            maxSoFar = currentMax;
    }

    printf("Maximum subarray sum: %d\n", maxSoFar);

    return 0;
}