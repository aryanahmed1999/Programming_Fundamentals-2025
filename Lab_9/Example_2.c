#include <stdio.h>

int main(){
    int y = 5;
    int z = 6;

    int const *yPtr = &y; 

    printf("%p\n", yPtr);

    *yPtr = &z;  //we have to comment this line out which can solve the issue.otherwise it wont compile.
    // we have already assigned y address at yptr and written as constant. so cant store address of z in yptr.

    printf("%p\n", yPtr);

    return 0;
}