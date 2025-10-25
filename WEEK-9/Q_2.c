#include <stdio.h>

int main(){
    int n,count = 0;
    printf("Enter the amount of elements to be entered : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements \n");

    for(int i = 0 ; i < n ; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0 ; i<n ; i++){
        if(arr[i] % 2 == 0){
            count++;
        }    
    }
    printf("Even Numbers in aarray = %d",count);



}