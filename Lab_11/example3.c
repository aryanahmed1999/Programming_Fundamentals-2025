#include <stdio.h>

void func(int *x,int *y);
int main(){
    int x = 5, y = 6;

    func(&x,&y);

    printf("%d %d", x , y);
    return 0;
}
void func(int *x,int *y){
    *x = 7;
    *y = 9;

    printf("%d %d", *x,*y);
    printf("\n");
}

