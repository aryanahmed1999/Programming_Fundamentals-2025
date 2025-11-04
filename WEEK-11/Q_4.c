#include <stdio.h>

int sumNatural(int n);

int main() {
    int n = 5;
    int result = sumNatural(n);

    printf("Sum of first %d natural numbers = %d\n", n, result);
    return 0;
}
int sumNatural(int n) {       
    if (n == 1)               
        return 1;
    else
        return n + sumNatural(n - 1); 
}
