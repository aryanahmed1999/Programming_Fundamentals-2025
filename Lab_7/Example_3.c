#include <stdio.h>

int main(){
    int A[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){   
        scanf("%d",&A[i][j]);
        }

    }
    printf("You enter :\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",A[i][j]);
         
        }
        printf("\n");
    }
    return 0;
     
	 }