#include <stdio.h>

int main(){
    char operator;
    printf("Enter + or - \n");
    scanf("%c", &operator); 
    int num1 = 8, num2 = 7, result=0 ;
    result= (operator == '+') ? (num1 + num2) : (num1 - num2);
    printf("%d", result);

    return 0;
}