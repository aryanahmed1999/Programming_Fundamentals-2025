#include <stdio.h>
//College Program and Courses
int main(){
    int course,year;
    printf("Enter course : 1 for Computer Science and 2 for Electrical Engineering\n");
    scanf("%d",&course);
    printf("Enter Year : 1 for First year and 2 for second year\n");
    scanf("%d",&year);
    switch (course)
    {
    case 1:
        switch (year)
        {
        case 1:
            printf("Computer Science 1st Year\n");
            break;
        case 2:
            printf("Computer Science 2nd year\n");
            break;
        default:
        printf("error\n");
            break;
        }
        break;
    case 2:   
        switch (year)
        {
        case 1:
            printf("Electrical Engineering 1st Year\n");
            break;
        case 2:
            printf("Electrical Engineering 2nd year\n");
            break;
        default:
        printf("error\n");
            break;
        }
        break; 
    
    default:
    printf("error");
        break;
    }
}