#include <stdio.h>
int totalsum(int num);
int main(){
    int num,isprime = 1;
    printf("Enter the 5 digit number\n");
    scanf("%d", &num);

    int original = num;

    int result = totalsum( num );
    if(result % 2 == 0 ){
        for(int i = 2 ; i<=num / 2 ;i++){
            if(num % i == 0){
                isprime = 0;
                break;
            }
        }
        if(isprime){
            printf("%d is a prime number\n",num);
        }else{
            printf("Number is not prime\n");
        }
    }else{
        int reversed = 0,remainder;
        while (original != 0) {
        remainder = original % 10;           
        reversed = reversed * 10 + remainder;  
        original = original / 10;                 
    }

    if (num == reversed)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
    }
}
int totalsum(int num ){
    int sum = 0,remainder = 0;
    for(int i = 1; i <=5; i++ ){
        remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    }  
    return sum;  
}