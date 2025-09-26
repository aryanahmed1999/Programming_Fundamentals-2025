#include <stdio.h>
/*A customer asks the IT firm to develop a program in C language, which can take tax rate and
salary from the user on runtime and then calculate the tax, the user has to pay and the salary
he/she will have after paying the tax. This information is then provided to the user.*/
int main(){
    float salary,tax_rate,tax,salary_after_tax;
    printf("Enter your Salary\n");
    scanf("%f",&salary);
    printf("Enter your tax rate without percentage sign \n");
    scanf("%f",&tax_rate);

    tax = salary*(tax_rate/100);
    salary_after_tax = salary - tax;

    printf("Your tax is : %f\n",tax);
    printf("Your salary after tax is : %f\n",salary_after_tax);


}