#include <stdio.h>

int main() {
    int A[2][2], B[2][2], sum[2][2];
    int i, j;

    printf("Enter elements of matrix A:\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of matrix B:\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &B[i][j]);

    // Adding matrices A and B
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            sum[i][j] = A[i][j] + B[i][j];

    printf("Sum of matrices:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
