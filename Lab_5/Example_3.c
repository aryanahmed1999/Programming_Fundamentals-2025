#include <stdio.h>
 
int main (){
    printf("This program based on your input tells you your Department\n");
    int dep, spe;
    printf("Enter your department respectively");
    printf("\n1 BCIT");
    printf("\n2 Software Engineering ");
    printf("\n3 Computer System Engineering\n");
    scanf("%d", &dep);
    switch(dep){
        case 1:
            printf("Your depart is BCIT\n");
            printf("Enter your specialization respectively\n");
            printf("1 CSIT\n");
            printf("2 CSDS\n");
            printf("3 CSGA\n");
            printf("4 CSAI\n");
            scanf("%d", &spe);
            switch(spe){
                case 1:
                    printf("Your specialization CSIT\n");
                    break;
                case 2:
                    printf("Your specialization CSDS\n");
                    break;
                case 3:
                    printf("Your specialization CSGA\n");
                    break;
                case 4:
                    printf("Your specialization CSAI\n");
                    break;
                default:
                    printf("Invalid input");
            }
            break;

        case 2:
            printf("Your depart is Software Engineering ");
            break;
        case 3:
            printf("Your depart is Computer System Engineering");
            break;
        default:
            printf("Invalid Input");
    }
    return 0;
}