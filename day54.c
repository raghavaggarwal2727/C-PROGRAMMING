#include <stdio.h>

int findPivot(int n) {
    int total = n * (n + 1) / 2;

    for (int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;
        int rightSum = total - (x - 1) * x / 2;

        if (leftSum == rightSum) {
            return x;
        }
    }

    return -1; // No pivot found
}

int main() {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int pivot = findPivot(n);

    if (pivot != -1)
        printf("Pivot integer: %d\n", pivot);
    else
        printf("-1\n");

    return 0;
}