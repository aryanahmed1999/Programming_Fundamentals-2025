#include <stdio.h>

int cube(int x);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = cube(num);     
    printf("Cube = %d\n", result);

    return 0;
}
int cube(int x) {        
    return x * x * x;
}
