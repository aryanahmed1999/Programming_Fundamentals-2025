#include <stdio.h>

void menu();
int main(){
    menu();
    int burger_price = 200;
    int fries_price = 50;
    int pizza_price = 500;
    int sandwiches_price = 150;
    int count,quantity_1,quantity_2,quantity_3,quantity_4;
    int bill_1,bill_2,bill_3,bill_4;
    char food_1,food_2,food_3,food_4;
    printf("How many types of snacks you need to order : ");
    scanf("%d",&count);
    if(count == 1){
        printf("Enter snack you want to order : ");
        scanf(" %c", &food_1);
        printf("Please provide its quantity : ");
        scanf("%d", &quantity_1);
        switch (food_1)
        {
        case 'B':
             bill_1 = quantity_1*burger_price;
            break;
        case 'F':
             bill_1 = quantity_1*fries_price;
            break;
        case 'P':
             bill_1 = quantity_1*pizza_price;
            break;
        case 'S':
             bill_1 = quantity_1*sandwiches_price;
            break;                 
        default:
            printf("invalid input\n");
            break;
        }
        printf("Total : %d\n",bill_1);
    }else if(count == 2){
        printf("Enter first snack you want to order : ");
        scanf(" %c", &food_1);
        printf("Please provide its quantity : ");
        scanf("%d", &quantity_1);
        switch (food_1)
        {
        case 'B':
             bill_1 = quantity_1*burger_price;
            break;
        case 'F':
             bill_1 = quantity_1*fries_price;
            break;
        case 'P':
             bill_1 = quantity_1*pizza_price;
            break;
        case 'S':
             bill_1 = quantity_1*sandwiches_price;
            break;                 
        default:
            printf("invalid input\n");
            break;
        }
        printf("Enter second snack you want to order : ");
        scanf(" %c", &food_2);
        printf("Please provide its quantity : ");
        scanf("%d", &quantity_2);
        switch (food_2)
        {
        case 'B':
             bill_2 = quantity_2*burger_price;
            break;
        case 'F':
             bill_2 = quantity_2*fries_price;
            break;
        case 'P':
             bill_2 = quantity_2*pizza_price;
            break;
        case 'S':
             bill_2 = quantity_2*sandwiches_price;
            break;                 
        default:
            printf("invalid input\n");
            break;
        }
        printf("Total : %d\n",bill_1+bill_2);
    }else if(count == 3){
        printf("Enter first snack you want to order : ");
        scanf(" %c", &food_1);
        printf("Please provide its quantity : ");
        scanf("%d", &quantity_1);
        switch (food_1)
        {
        case 'B':
             bill_1 = quantity_1*burger_price;
            break;
        case 'F':
             bill_1 = quantity_1*fries_price;
            break;
        case 'P':
             bill_1 = quantity_1*pizza_price;
            break;
        case 'S':
             bill_1 = quantity_1*sandwiches_price;
            break;                 
        default:
            printf("invalid input\n");
            break;
        }
        printf("Enter second snack you want to order : ");
        scanf(" %c", &food_2);
        printf("Please provide its quantity : ");
        scanf("%d", &quantity_2);
        switch (food_2)
        {
        case 'B':
             bill_2 = quantity_2*burger_price;
            break;
        case 'F':
             bill_2 = quantity_2*fries_price;
            break;
        case 'P':
             bill_2 = quantity_2*pizza_price;
            break;
        case 'S':
             bill_2 = quantity_2*sandwiches_price;
            break;                 
        default:
            printf("invalid input\n");
            break;
        }
        printf("Enter third snack you want to order : ");
        scanf(" %c", &food_3);
        printf("Please provide its quantity : ");
        scanf("%d", &quantity_3);
        switch (food_3)
        {
        case 'B':
             bill_3 = quantity_3*burger_price;
            break;
        case 'F':
             bill_3 = quantity_3*fries_price;
            break;
        case 'P':
             bill_3 = quantity_3*pizza_price;
            break;
        case 'S':
             bill_3 = quantity_3*sandwiches_price;
            break;                 
        default:
            printf("invalid input\n");
            break;
        }
        printf("Total : %d\n",bill_1+bill_2+bill_3);
    }else if(count == 4){
        printf("Enter snack you want to order : ");
        scanf(" %c", &food_1);
        printf("Please provide its quantity : ");
        scanf("%d", &quantity_1);
        switch (food_1)
        {
        case 'B':
             bill_1 = quantity_1*burger_price;
            break;
        case 'F':
             bill_1 = quantity_1*fries_price;
            break;
        case 'P':
             bill_1 = quantity_1*pizza_price;
            break;
        case 'S':
             bill_1 = quantity_1*sandwiches_price;
            break;                 
        default:
            printf("invalid input\n");
            break;
        }
        printf("Enter second snack you want to order : ");
        scanf(" %c", &food_2);
        printf("Please provide its quantity : ");
        scanf("%d", &quantity_2);
        switch (food_2)
        {
        case 'B':
             bill_2 = quantity_2*burger_price;
            break;
        case 'F':
             bill_2 = quantity_2*fries_price;
            break;
        case 'P':
             bill_2 = quantity_2*pizza_price;
            break;
        case 'S':
             bill_2 = quantity_2*sandwiches_price;
            break;                 
        default:
            printf("invalid input\n");
            break;
        }
        printf("Enter third snack you want to order : ");
        scanf(" %c", &food_3);
        printf("Please provide its quantity : ");
        scanf("%d", &quantity_3);
        switch (food_3)
        {
        case 'B':
             bill_3 = quantity_3*burger_price;
            break;
        case 'F':
             bill_3 = quantity_3*fries_price;
            break;
        case 'P':
             bill_3 = quantity_3*pizza_price;
            break;
        case 'S':
             bill_3 = quantity_3*sandwiches_price;
            break;                 
        default:
            printf("invalid input\n");
            break;
        }
        printf("Enter fourht snack you want to order : ");
        scanf(" %c", &food_4);
        printf("Please provide its quantity : ");
        scanf("%d", &quantity_4);
        switch (food_4)
        {
        case 'B':
             bill_4 = quantity_4*burger_price;
            break;
        case 'F':
             bill_4 = quantity_4*fries_price;
            break;
        case 'P':
             bill_4 = quantity_4*pizza_price;
            break;
        case 'S':
             bill_4 = quantity_4*sandwiches_price;
            break;                 
        default:
            printf("invalid input\n");
            break;
        }
        printf("Total : %d\n",bill_1+bill_2+bill_3+bill_4);
        
    }else{
        printf("invalid input");
    }
    printf("Thank you for your order... have a nice day");
        
    }


void menu(){
    printf("Please select from the following menu:\nB=BURGER (RS.200)\nF=French Fries (Rs.50)\nP=Pizza (RS.500)\nS=Sandwiches (RS.150)\n");
}