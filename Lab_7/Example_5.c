#include<stdio.h>

int main(){
	int sum=0,n;
    int marks[6];
    float avg = 0;
    printf("How many Courses Offered to you: ");
    scanf("%d",&n);
    printf("Enter the Courses Marks: \n");
    for(int i=0;i<n;i++){
	    scanf("%d",&marks[i]);
    }

    for(int i =0;i<n;i++){
	    sum += marks[i];
    }
    avg = sum / n;

    printf("Sum = %d\n",sum);
    printf("Average = %.2f",avg);

    return 0;
}