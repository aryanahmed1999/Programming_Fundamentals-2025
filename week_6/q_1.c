#include <stdio.h>
//Day and Activity Planner
int main(){
    int day,time;
    printf("Enter a day of the week (1 = Monday, ..., 7 = Sunday).\n");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Time of day : M for Morning or E for Evening\n");
        scanf(" %c",&time);
        switch (time)
        {
        case 'M':
            printf("Go to Class\n");
            break;
        case 'E':
            printf("Do Homework\n");
            break;    
        
        default:
        printf("error\n");
            break;
        }
        break;
    case 2:
        printf("Time of day : M for Morning or E for Evening\n");
        scanf(" %c",&time);
        switch (time)
        {
        case 'M':
            printf("Go to Class\n");
            break;
        case 'E':
            printf("Do Homework\n");
            break;    
        
        default:
        printf("error\n");
            break;
        }
        break;
    case 3:
        printf("Time of day : M for Morning or E for Evening\n");
        scanf(" %c",&time);
        switch (time)
        {
        case 'M':
            printf("Go to Class\n");
            break;
        case 'E':
            printf("Do Homework\n");
            break;    
        
        default:
        printf("error\n");
            break;
        }
        break;
    case 4:
        printf("Time of day : M for Morning or E for Evening\n");
        scanf(" %c",&time);
        switch (time)
        {
        case 'M':
            printf("Go to Class\n");
            break;
        case 'E':
            printf("Do Homework\n");
            break;    
        
        default:
        printf("error\n");
            break;
        }
        break;
    case 5:
        printf("Time of day : M for Morning or E for Evening\n");
        scanf(" %c",&time);
        switch (time)
        {
        case 'M':
            printf("Go to Class\n");
            break;
        case 'E':
            printf("Do Homework\n");
            break;    
        
        default:
        printf("error\n");
            break;
        }
        break;
    case 6:
        printf("Time of day : M for Morning or E for Evening\n");
        scanf(" %c",&time);
        switch (time)
        {
        case 'M':
            printf("Play sports\n");
            break;
        case 'E':
            printf("watch movie\n");
            break;    
        
        default:
        printf("error\n");
            break;
        }
        break;
    case 7:
        printf("Time of day : M for Morning or E for Evening\n");
        scanf(" %c",&time);
        switch (time)
        {
        case 'M':
            printf("Play sports\n");
            break;
        case 'E':
            printf("watch movie\n");
            break;    
        
        default:
        printf("error\n");
            break;
        }
        break;

    default:
        printf("Error\n");
        break;
    }
}