#include <stdio.h>
/*Write a program that asks for the number of calories and fat grams in a food. The program should display the percentage of 
calories that come from fat. If the calories from fat are less than 30% of the total calories of the food, it should also
display a message indicating that the food is low in fat. One gram of fat has 9 calories, so Calories from fat = fat grams * 9.
The percentage of calories from fat can be calculated as: calories from fat/total calories Input validation: Make sure the
number of calories and fat grams are not less than 0. Also, the number of calories from fat cannot be greater than the total
number of calories. If that happens, display an error message indicating that either the calories or fat grams were incorrectly
 entered.*/

 int main(){
    float total_calories,fat;
    printf("Enter total number of calories in a food : ");
    scanf("%f", &total_calories);
    printf("Enter fat(g) in a food : ");
    scanf("%f",&fat);

    float calories_in_fat = fat*9;
    float calories_of_fat_in_percentage = (calories_in_fat/total_calories);

    if(total_calories < 0 || calories_of_fat_in_percentage < 0 || calories_in_fat > total_calories){
        printf("Either the calories or fat grams were incorrectly entered.\n");
    }else if(calories_of_fat_in_percentage < 0.3){       
        printf("Food is low in fat\n");
        printf("Percentage of calories that come from fat are : %.4f", calories_of_fat_in_percentage*100);
    }
        


    
}
