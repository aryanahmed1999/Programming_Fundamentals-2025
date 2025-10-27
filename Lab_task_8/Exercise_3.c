#include <stdio.h>
#include <string.h>

int main() {
    char string_1[100], string_2[100];
    
    printf("Enter first string: ");
    gets(string_1);  
    printf("Enter second string: ");
    gets(string_2);
    
    int result = strcmp(string_1, string_2);

    if(result == 0)
        printf("Both strings are equal \n");
    else if(result > 0)
        printf("First string is greater than second \n");
    else
        printf("Second string is greater than first \n");

    return 0;
}
