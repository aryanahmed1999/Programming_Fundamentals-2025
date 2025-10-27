#include <stdio.h>

// sum of diagnol elements in 2d array.
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int sum_of_diagnol = 0,sum_of_diagnol_1 = 0;

    for(int i = 0; i < 3; i++){
        sum_of_diagnol += arr[i][i];
    }
    printf("Sum of diagnol from top left to bottom right = %d\n",sum_of_diagnol);

    for(int i = 0; i < 3 ; i++){
        sum_of_diagnol_1 += arr[i][2-i];
    }
    printf("Sum of diagnol from bottom left to top right = %d",sum_of_diagnol_1);
    return 0;
}