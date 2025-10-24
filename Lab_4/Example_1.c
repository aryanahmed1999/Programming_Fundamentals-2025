#include<stdio.h>
int main(){
    int age, hasid;
    printf("Enter yor age : ");
    scanf("%d",&age);
    if(age>=18){
        printf("Do you have id if yes then type 1: ");
        scanf("%d",&hasid);
        if(hasid==1){
            printf("\nYou are eligible");
        }else{
            printf("You are not eligible");
        }

    }else{
        printf("You are under age please try Later\n");
    }
    return 0;
}    
