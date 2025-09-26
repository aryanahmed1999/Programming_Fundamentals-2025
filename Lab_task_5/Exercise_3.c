#include <stdio.h>
/*Write a program in which user enters his NTS and F.Sc marks and your program will help student
in selection of university. Based on these marks Student will be allocated a seat at different
department of different university.
Oxford
IT: Above 70% in Fsc. and 70 % in NTS
Electronics: Above 70% in Fsc. and 60 % in NTS
Telecommunication Above 70% in Fsc. and 50 % in NTS
MIT
IT: 70% - 60 % in Fsc. and 50 % in NTS
Chemical: 59% – 50 % in Fsc. and 50 % in NTS
Computer: Above 40% and below 50 % in Fsc. and 50 % in NTS*/
int main(){
    int NTS,FSC;
    printf("Enter NTS marks : ");
    scanf("%d",&NTS);
    printf("Enter F.sc marks : ");
    scanf("%d",&FSC);

    if(FSC > 70){
        if(NTS > 70){
            printf("You are eligible for a seat in IT,ELECTRONICS,TELECOMMUNICATION in OXFORD\n");
            printf("You are eligible for a seat in IT,CHEMICAL,COMPUTER in MIT\n");
        }else if(NTS > 60){
            printf("You are eligible for a seat in ELECTRONICS,TELECOMMUNICATION in OXFORD\n");
            printf("You are eligible for a seat in IT,CHEMICAL,COMPUTER in MIT\n");
        }else if(NTS > 50){
            printf("You are eligible for a seat in TELECOMMUNICATION in OXFORD\n");
            printf("You are eligible for a seat in IT,CHEMICAL,COMPUTER in MIT\n");
        }else{
            printf("You are not eligible for OXFORD\n");
            printf("You are not eligible for MIT\n");
        }
    }else if ((FSC<=70 && FSC>=60) && (NTS >50)){
        printf("You are eligible for a seat in IT,CHEMICAL,COMPUTER in MIT only\n");    
    } else if((FSC<60 && FSC>=50) && (NTS > 50)){
        printf("You are eligible for a seat in CHEMICAL,COMPUTER in MIT only\n");
    }else if((FSC<50 && FSC>40) && (NTS > 50) ){
        printf("You are eligible for a seat in COMPUTER in MIT only\n");
    }else{
        printf("You are not eigible for MIT\n");
         printf("You are not eigible for OXFORD\n");
    }           
}
