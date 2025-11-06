#include <stdio.h>

int main(){
    int n = 5;
    int *ptr;
    ptr = &n;

    printf("%d\n",n);         // value at n (5).
    printf("%d\n", *ptr);    // value at n (5).
    printf("%u\n",ptr);     // address of n in decimal.
    printf("%u\n", &n);    // address of n in decimal
    printf("%u\n", &ptr); // address of ptr in decimal.

    return 0;
}