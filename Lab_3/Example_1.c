#include <stdio.h>

int main(){
    int a, b;
    printf("This program checks the maximum number between two input numbers.\n");

    printf("Enter 1st number: ");
    scanf("%d", &a);

    printf("Enter 2nd number: ");
    scanf("%d", &b);

    (a > b)?printf("Maximum number is: %d\n", a):printf("Maximum number is: %d\n", b);
    
    return 0;
}