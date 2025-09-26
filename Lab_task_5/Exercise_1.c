#include <stdio.h>
/*You must have seen the question before deleting anything like “Are you sure to delete [Y/y] /
[N/n] ? Create a program that asks for this question if user enters Y or y it prints “Deleted
successfully”. If the user enters N or n it prints “Delete cancelled” otherwise it prints choose
the right option using switch statement.*/
int main(){
    char ch;
    printf("Are you sure to delete [Y/y] /[N/n] ? ");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'Y':
    case 'y':
    printf("Deleted Successfully");
    break;
    case 'N':
    case 'n':
    printf("Delete cancelled");
    break;    
    default:
    printf("Choose the right option");
        break;
    }
}