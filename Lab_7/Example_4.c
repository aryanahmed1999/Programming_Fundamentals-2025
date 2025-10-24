#include <stdio.h>

int main(){
    int row1, column1, row2, column2;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &row1, &column1);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &row2, &column2);

    if (column1 != row2) {
        printf("Matrix multiplication not possible! (Columns of A must equal Rows of B)\n");
        return 0;
    }

    int A[row1][column1], B[row2][column2], C[row1][column2];

    printf("\nEnter elements of Matrix A (%dx%d):\n", row1, column1);
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B (%dx%d):\n", row2, column2);
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < column2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < column1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatrix A:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < column2; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nResultant Matrix (A x B):\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
