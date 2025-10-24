#include<stdio.h>

int main (){
	int tax_rate,salary,new_salary;
    float tax;
	
    printf("Enter Salary: ");
	scanf("%d",&salary);
    printf("Enter Tax Rate(in percentage): ");
	scanf("%d",&tax_rate);
	    

	tax=salary*(tax_rate / 100.0);
	new_salary=salary-tax;

	printf("Tax deducted : %.1f\nSalary after tax = %d\n",tax,new_salary);
    
	return 0;
}