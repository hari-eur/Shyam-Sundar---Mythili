#include <stdio.h>
int main() {
    int n, m, i, j;
    printf("Enter size of matrix (odd number): ");
    scanf("%d", &n);
    printf("Enter element to be replaced: ");
    scanf("%d", &m);
    int arr[n][n];
    printf("Enter the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 1; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (arr[i][j] == m) {
                arr[i][j] = arr[i-1][j];
            }
        }
    }
    printf("Modified matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}