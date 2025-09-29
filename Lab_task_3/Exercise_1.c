#include <stdio.h>
/*Write a C program that takes two integer values as input from the user. Then swap the values
taken from the user and display the output of the variables*/
int main(){
    int num1,num2, a;
    printf("Enter first number\n");
    scanf("%d", &num1);
    printf("Enter Second number\n");
    scanf("%d",&num2);

    a = num1;
    num1 = num2;
    num2 = a;

    printf("First number after swapping is : %d\n", num1);
    printf("Second number after swapping is : %d\n", num2);

}