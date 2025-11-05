#include <stdio.h>

int main() {
    int nums[100], n, target;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d positive integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target value: ");
    scanf("%d", &target);

    int found = 0;

    // Brute-force search for two indices
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (!found)
        printf("-1 -1\n");

    return 0;
}