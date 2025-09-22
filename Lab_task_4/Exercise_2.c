#include <stdio.h> 
//Online store providing discounts 
int main(){ 
    float cost; 
    printf("DISCOUNT ON ITEMS COSTING MORE THAN 1999 \n");
     printf("Enter the Cost of the item \n");
      scanf("%f", &cost); 

if (cost < 2000){ 
    printf("No Discount for you !"); 
}else if(cost >= 2000 && cost <=4000){ 
    printf("ACTUAL AMOUNT OF ITEM : %f \n", cost); 
    float saved_amount = cost *0.2; 
    float amount_after_discount = cost - saved_amount; 
    printf("SAVED AMOUNT IS : %f \n", saved_amount); 
    printf("AMOUNT AFTER DISCOUNT : %f \n", amount_after_discount); 
}else if(cost > 4000 && cost <= 6000){ 
    printf("ACTUAL AMOUNT OF ITEM : %f \n", cost); 
    float saved_amount = cost *0.3; 
    float amount_after_discount = cost - saved_amount; 
    printf("SAVED AMOUNT IS : %f \n", saved_amount); 
    printf("AMOUNT AFTER DISCOUNT : %f \n", amount_after_discount); 
}    else if(cost > 6000){ 
    printf("ACTUAL AMOUNT OF ITEM : %f \n", cost); 
    float saved_amount = cost *0.5; 
    float amount_after_discount = cost - saved_amount; 
    printf("SAVED AMOUNT IS : %f \n", saved_amount); 
    printf("AMOUNT AFTER DISCOUNT : %f \n", amount_after_discount);  
}
return 0;
} 
      
