#include <stdio.h> 

// Character Classification 

int main(){ 

    char ch; 

    printf("Enter character letter, digit or special character : "); 

    scanf("%c", &ch); 

  

    if(ch >= 'A' && ch <= 'Z' ){ 

        printf("Uppercase letter \n"); 

    }else if( ch >= 'a' && ch <= 'z'){ 

        printf("Lowercase letter \n"); 

    }else if( ch >= '0' && ch <= '9'){ 

        printf("Its a Digit \n"); 

    }else{ 

        printf("Its a Special Character \n"); 

    } 

    return 0; 

} 