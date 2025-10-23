#include <stdio.h>

int main(){
    int rows,columns;
    printf("Enter order of matrix (e.g. a x b)\n");
    scanf("%d %d", &rows,&columns);
    printf("Enter values to be stored in matrix\n");
    int sqrmatrix[rows][columns];
    int transposesqrmatrix[columns][rows];

    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j <columns; j++ ){
            scanf("%d", &sqrmatrix[i][j]);
        }
    }
    printf("-----Entered Matrix-----\n");
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j <columns; j++ ){
            printf("%d ",sqrmatrix[i][j]);
        }
        printf("\n");
    }
    printf("-----Transpose Matrix-----\n");
    for(int i = 0; i < rows ; i++){
        for(int j = 0 ; j < columns ; j++){
            transposesqrmatrix[j][i] = sqrmatrix[i][j];
        }
    }
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transposesqrmatrix[i][j]);
        }
        printf("\n");
    }

}