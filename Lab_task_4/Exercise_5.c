#include <stdio.h>
/*Teacher asks the student to check whether the input number is divisible by 7 or not. For checking
the divisibility, take the last digit and double it, take the rest of the digits and subtract the
doubled last digit repeat until the result is 7, -7 or 0. For example:
10976 -> 1097-12 = 1085 -> 108-10 = 98 -> 9-16 = -7
49 -> 4 - 18 = 14 -> 1 - 8 = -7*/

int main(){
    int num;
    printf("enter Number : ");
    scanf("%d", &num);

    while (num != 0 && num != 7 && num != -7) {
        int lastDigit = num % 10;           
        int rest = num / 10;            
        num = rest - 2 * lastDigit; 
    }

    if (num == 0 || num == 7 || num == -7)
        printf("The number is divisible by 7.\n");
    else
        printf("The number is NOT divisible by 7.\n");

    return 0;
}
