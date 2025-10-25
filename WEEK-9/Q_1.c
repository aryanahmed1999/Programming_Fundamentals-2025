#include <stdio.h>

int main(){
    int n;
    printf("Enter the amount of elements to be entered : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements \n");

    for(int i = 0 ; i < n ; i++){
        scanf("%d", &arr[i]);
    }
    printf("array entered : \n");
    for(int i = 0; i < n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    int reversearr[n];

    for(int i = 0; i < n; i++){
    reversearr[i] = arr[n - 1 - i];
    }
    printf("Array reversed is : \n");

    for(int i = 0 ; i<n;i++){
        printf("%d\t",reversearr[i]);
    }

    return 0;

}