#include <stdio.h> 
// Electricity Bill Calculator 
int main(){ 
    float units; 
    printf("Enter units consumed : ");
    scanf("%f", &units); 

if(units >= 0 && units <= 100){ 
    printf("Electricity Bill to be paid is : Rs. %.2f", (units * 5)); 
}else if(units > 100 && units <= 200){ 
    printf("Electricity Bill to be paid is : Rs. %.2f", ((100 * 5) + ((units - 100) * 7))); 
}else if( units > 200){ 
    printf("Electricity Bill to be paid is : Rs. %.2f", ((100 * 5) + (100 * 7) + ((units -200) * 10))); 
}else{ 
    printf("NOT VALID UNITS \n"); 
} 
return 0; 
  

} 