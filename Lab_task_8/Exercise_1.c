#include <stdio.h>
#include <string.h>

int main(){
    char firstname[50];
    char lastname[50];
    char fullname[101] = "";  
    
    printf("Enter first name : ");
    scanf("%s", firstname);
    printf("Enter last name : ");
    scanf("%s", lastname);

    strcat(fullname, firstname);
    strcat(fullname, " ");
    strcat(fullname, lastname);
    int length = strlen(fullname);
    char reversed[111];
    int i,j;


    for (i = 0, j = length - 1; j >= 0; i++, j--) {
        reversed[i] = fullname[j];
    }
    reversed[i] = '\0';

    printf("Full name reversed: %s\n", reversed);

    return 0 ;
}