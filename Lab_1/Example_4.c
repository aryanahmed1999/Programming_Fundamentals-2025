#include<stdio.h>
//swapping numbers
int main (){
	int a,b;
	printf("enter num 1: ");
	scanf("%d",&a);
	printf("enter num 2: ");
	scanf("%d",&b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("number 1 = %d , number 2 = %d",a,b);

    return 0;
}