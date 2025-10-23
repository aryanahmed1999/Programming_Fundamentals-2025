#include <stdio.h>

int main(){
    int rows,columns;
    printf("Enter order of matrix (e.g. a x b)\n");
    scanf("%d %d", &rows,&columns);
    printf("Enter values to be stored in matrix\n");
    int MatrixA[rows][columns];
    int transposeMatrixA[columns][rows];

    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j <columns; j++ ){
            scanf("%d", &MatrixA[i][j]);
        }
    }
    printf("-----Entered Matrix-----\n");
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j <columns; j++ ){
            printf("%d ",MatrixA[i][j]);
        }
        printf("\n");
    }
    printf("-----Transpose Matrix-----\n");
    for(int i = 0; i < rows ; i++){
        for(int j = 0 ; j < columns ; j++){
            transposeMatrixA[j][i] = MatrixA[i][j];
        }
    }
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transposeMatrixA[i][j]);
        }
        printf("\n");
    }
    if (rows != columns) {
        printf("Matrix is not symmetric (not a square matrix)\n");
    } else {
        int symmetric = 1; 
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                if (MatrixA[i][j] != transposeMatrixA[i][j]) {
                    symmetric = 0; 
                    break;
                }
            }
            if (symmetric)
                break;
        }

        if (symmetric)
            printf("Matrix is symmetric\n");
        else
            printf("Matrix is asymmetric\n");
    }

    return 0;
}