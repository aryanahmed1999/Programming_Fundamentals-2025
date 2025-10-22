#include <stdio.h>

int main() {
    int rows, columns,totalElements;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);

    int matrix[10][10];
    int i, j, countZero = 0;

    printf("Enter elements of the matrix (%d x %d):\n", rows, columns);
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j] == 0)
                countZero++;
        }
    }

    printf("\nThe Matrix is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    totalElements = rows * columns;

    if(countZero >= totalElements / 2)
        printf("The matrix is a Sparse Matrix\n");
    else
        printf("The matrix is NOT a Sparse Matrix\n");

    printf("Total Zero Elements: %d\n", countZero);

    return 0;
}
