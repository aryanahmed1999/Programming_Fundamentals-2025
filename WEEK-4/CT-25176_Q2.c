#include <stdio.h> 

//Triangle Type Identifier 

int main(){ 

    float a,b,c; 

    printf("enter value of a \n"); 

    scanf("%f", &a); 

    printf("enter value of b \n"); 

    scanf("%f", &b); 

    printf("enter value of c \n"); 

    scanf("%f", &c); 

  

    if( a + b > c && a + c > b && b + c > a){ 

        if(a == b && a == c && b == c){ 

            printf("This is an Equilateral Triangle \n"); 

        }else if(a == b || a==c || b == c){ 

            printf("This is an Isosceles Triangle \n"); 

        }else if(a != b != c){ 

            printf("This is a Scalene Triangle \n"); 

        } 

    }else{ 

        printf("NOT A VALID TRIANGLE \n"); 

    } 

    return 0; 
} 