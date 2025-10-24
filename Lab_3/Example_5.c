#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter value of number 1: ");
    scanf("%d",&num1);
    printf("\nEnter value of number 2: ");
    scanf("%d",&num2);
    (num1!=num2?num1>num2? printf("The first number is greater"): printf("The second number is greater"):printf("The numbers are equal"));
}