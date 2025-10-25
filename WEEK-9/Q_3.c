#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements:\n");

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int large1 = arr[0];
    int large2 = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] > large1){
            large1 = arr[i];
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] > large2 && arr[i] < large1){
            large2 = arr[i];
        }
    }

    printf("Two largest numbers are: {%d,%d}\n", large2, large1);

    return 0;
}
