#include <stdio.h>
int main(){
	float num1, num2,div; 
    int choice;
	printf ("Enter two numbers\n"); 
	scanf("%f %f", &num1, &num2);

	printf("Press \n 1 for sum \n 2 for sub \n 3 for mul \n 4 for div\n"); 
	scanf ("%d", &choice);

	switch (choice){ 
        case 1:
		    printf("Sum = %.2f\n", num1+num2); 
		    break;
	    case 2:
		    printf("Subtraction = %.2f\n", num1-num2); 
		    break;
	    case 3:
		    printf("Multiplication = %.2f\n", num1*num2);
	        break;
	    case 4:
            div = num1 / num2; 
		    printf("Division = %.04f\n", div); 
		    break;

	    default:
		    printf("Enter valid choice\n");
}
}