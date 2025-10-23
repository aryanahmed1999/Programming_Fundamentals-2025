#include <stdio.h>
#include <string.h>

int main(){
    char firstname[50];
    char lastname[50];
    printf("Enter your First name : ");
    scanf("%s",firstname);
    printf("Enter your Last name : ");
    scanf("%s",lastname);


    strcat(firstname," ");
    strcat(firstname,lastname);

    printf("Your Full name : %s\n",firstname);

    int length = strlen(firstname);
    printf("Number of characters in the name : %d",length - 1);
}