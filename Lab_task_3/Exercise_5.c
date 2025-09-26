#include <stdio.h>
/*Construct a C program with the flowchart below. The input value of the Principle must be
between 100 Rs. To 1,000,000 Rs. The Rate of interest must be between 5% to 10% and Time
Period must be between 1 to 10 years. Hint: these restrictions can be displayed in the form of
message on the window.*/
int main(){
    float principal,interest,year;
    printf("Enter Principal :\n");
    scanf("%f",&principal);
    printf("Enter Interest rate :\n");
    scanf("%f",&interest);
    printf("Enter time period in years :\n");
    scanf("%f",&year);

    float simple_interest = (principal*interest*year)/100;

    printf("Simple Interest is %f",simple_interest);

}
