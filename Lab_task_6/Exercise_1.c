#include <stdio.h>

int main(){
    int a;
    printf("enter a ");
    scanf("%d",&a);
    int i = 1;
    int fact = 1;

    while(i < a){
        fact = fact * i;
        i++;     
    }
    printf("%d",fact);
}
