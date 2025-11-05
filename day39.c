#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[100][100];
    int diag[100]; // To store diagonal elements
    int count = 0;
    bool isDistinct = true;

    // Read matrix and collect diagonal elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                diag[count++] = matrix[i][j];
            }
        }
    }

    // Check for duplicates in diagonal
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (diag[i] == diag[j]) {
                isDistinct = false;
                break;
            }
        }
        if (!isDistinct) break;
    }

    // Result
    if (isDistinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}