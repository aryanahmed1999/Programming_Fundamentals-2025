#include <stdio.h>
#include <string.h>


int main(){
    char firstname[50] = "Aryan";
    char lastname[50] = "Ahmed";
    char fullname[51] = "";
    
    strcat(fullname,firstname);
    strcat(fullname," ");
    strcat(fullname,lastname);
    printf("%s", fullname);

    return 0;
}