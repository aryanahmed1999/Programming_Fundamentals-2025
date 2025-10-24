#include<stdio.h>

int main(){
    int a;
	printf("This program checks if a number is positive negative or zero");
	printf("\nEnter a number: ");
	scanf("%d",&a);
	(a>0)?printf("Number is Positive %d",a):(a<0)?printf("Number is Negative %d",a):printf("Number is zero");

    return 0;
}