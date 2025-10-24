
#include <stdio.h>

int main(){
    int a;
    printf("This program checks if a number is even or odd.\n");

    printf("Enter a number: ");
    scanf("%d", &a);

    (a % 2 == 0) ? printf("Even\n") : printf("Odd\n");

    return 0;
}
