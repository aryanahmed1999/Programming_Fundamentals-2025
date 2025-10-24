#include<stdio.h>

int main(){
	int day;
	char c;
	printf("Enter day of the week\n(e.g 1 for Monday)\n ");
	scanf("%d",&day);
	switch(day){
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("Enter M for morning \nE for evening\n");
			scanf(" %c",&c);
			switch(c){
			    case 'M':
			    case 'm':
				    printf("Go to Class\n");
			        break;
			    case 'E':
			    case 'e':
				    printf("Do Homework\n");
			        break;
			    default:
			        printf("invalid input\n");	
		    }
        break;    
		case 6:
		case 7:
			printf("Enter M for morning \nE for evening\n");
			scanf(" %c",&c);
		    switch(c){
			    case 'M':
			    case 'm':
				    printf("Play sports\n");
			        break;
			    case 'E':
			    case 'e':
				    printf("Watch movies\n");
			        break;
			    default:
			        printf("invalid input\n");	
		    }
            break;
		default:
			printf("Invalid input\n");	
	}
}