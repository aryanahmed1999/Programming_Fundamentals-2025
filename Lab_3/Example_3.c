#include<stdio.h>
int main (){
	printf("time should be 1-5 and it should not be negative (for hours not travelled enter 0)\n");
	int time,d1,d2,d3,d4,d5;
	printf("Enter time:");
	scanf("%d",&time);
	printf("Enter distance 1:");
	scanf("%d",&d1);
	printf("Enter distance 2:");
	scanf("%d",&d2);
	printf("Enter distance 3:");
	scanf("%d",&d3);
	printf("Enter distance 4:");
	scanf("%d",&d4);
	printf("Enter distance 5:");
	scanf("%d",&d5);
	int velocity;
	velocity = (time >= 5) ? (d1 + d2 + d3 + d4 + d5) / 5.0 :(time >= 4) ? (d1 + d2 + d3 + d4) / 4.0 :(time >= 3) ? (d1 + d2 + d3) / 3.0 :(time >= 2) ? (d1 + d2) / 2.0 :d1;

	printf("%d",velocity);
    
	return 0;
}