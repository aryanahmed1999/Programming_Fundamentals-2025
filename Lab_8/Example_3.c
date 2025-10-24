#include <stdio.h>
#include <string.h>

int main(){
    char firstName[50], lastName[50], fullName[50];
    int countOfCharac = 0, i;

    printf("Enter your First Name: ");
    scanf("%s", firstName);

    printf("Enter your Last Name: ");
    scanf("%s", lastName);

    fullName[0] = '\0';

    strcat(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    printf("Your Full Name is: %s\n", fullName);
    
    int length = strlen(fullName) - 1;

    printf("Number of characters in the name are %d\n",length);
    

    return 0;
}
