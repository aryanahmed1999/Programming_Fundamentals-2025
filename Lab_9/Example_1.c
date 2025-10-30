#include <stdio.h>

int main(){
    int y = 5; // value 5 in y
    int *yPtr; // defining a pointer (*yptr) . *yptr means the value at the address which is in yptr. * = means value at the address.
    yPtr = &y; // now to the pointer we assign the address of y to it .

    return 0;
}