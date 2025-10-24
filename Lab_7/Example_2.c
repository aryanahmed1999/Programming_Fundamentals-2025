#include<stdio.h>

int main(){
    int number[5];
    for(int i=0;i<5;i++){
        printf("Enter number: ");
        scanf("%d",&number[i]);
    }

    printf("You enter :\t");

    for(int i=0;i<5;i++){
        printf("%d\t",number[i]);
    }
    
	return 0;
}