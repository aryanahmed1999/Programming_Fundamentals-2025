#include <stdio.h>

int main(){
    int a, b,mod, add, subtract, mult;
    float div;

    printf("Enter the 1st number: ");
    scanf("%d", &a);

    printf("Enter the 2nd number: ");
    scanf("%d", &b);

    add = a + b;
    subtract = a - b;
    mult = a * b;
    div = (float)a / b; 
    mod = a % b;

    printf("%d + %d = %d\n",a,b, add);
    printf("%d - %d = %d\n",a,b, subtract);
    printf("%d x %d = %d\n",a,b, mult);
    printf("%d / %d = %f\n",a,b, div);
    printf("%d modulus %d = %d\n",a,b, mod);

    return 0;
}