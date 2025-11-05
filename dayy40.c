#include <stdio.h>

int main() {
    int m, n, p;
    printf("Enter rows and columns of Matrix A (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter columns of Matrix B (p): ");
    scanf("%d", &p);

    int A[100][100], B[100][100], C[100][100];

    // Read Matrix A
    printf("Enter elements of Matrix A (%dx%d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read Matrix B
    printf("Enter elements of Matrix B (%dx%d):\n", n, p);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix C
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    // Multiply A and B → store in C
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result
    printf("\nProduct of matrices (A x B):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}