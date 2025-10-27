#include <stdio.h>
#include <string.h>

int main() {
    char string1[50];
    char string2[50];

    printf("Enter first string: ");
    fgets(string1,50,stdin); 

    printf("Enter second string: ");
    fgets(string2,50,stdin);   

    if (strcmp(string1, string2) == 0)
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}
