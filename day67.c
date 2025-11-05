#include <stdio.h>

int main() {
    int a[100], b[100], merged[200];
    int m, n, i = 0, j = 0, k = 0;

    printf("Enter size of first sorted array: ");
    scanf("%d", &m);
    printf("Enter %d sorted elements: ", m);
    for (int x = 0; x < m; x++) {
        scanf("%d", &a[x]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &n);
    printf("Enter %d sorted elements: ", n);
    for (int x = 0; x < n; x++) {
        scanf("%d", &b[x]);
    }

    // Merge both arrays
    while (i < m && j < n) {
        if (a[i] <= b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }

    // Copy remaining elements
    while (i < m)
        merged[k++] = a[i++];
    while (j < n)
        merged[k++] = b[j++];

    // Print merged array
    printf("Merged sorted array: ");
    for (int x = 0; x < k; x++) {
        printf("%d ", merged[x]);
    }
    printf("\n");

    return 0;
}