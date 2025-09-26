#include <stdio.h>
/*A car traveled for some hours. The time car traveled is taken at run time of the program, and it
must not be negative and must be between one to five hours. The car had not traveled same
distance in each hour. The distance that the car covered must not be negative. Write a C Program
that computes the Average Speed of the Car in miles per hour. Hint: the restrictions can be
displayed in the form of message on the window.*/
int main(){
    int time;
    float mile1,mile2,mile3,mile4,mile5;

    printf("Enter the time travelled by the car (1-5 hrs)\n");
    scanf("%d", &time);

    (time == 1)?printf("enter miles travelled in first hour :"),scanf("%f", &mile1),printf("Average speed is : %.2f",(mile1/time)) :
    (time == 2)?printf("enter miles travelled in first hour :"),scanf("%f", &mile1),printf("enter miles travelled in second hour :"),
    scanf("%f", &mile2), printf("Average speed is : %.2f",(mile1+mile2)/time) :
    (time == 3)?printf("enter miles travelled in first hour :"),scanf("%f", &mile1),printf("enter miles travelled in second hour :"),
    scanf("%f", &mile2),printf("enter miles travelled in third hour :"),scanf("%f", &mile3),printf("Average speed is : %.2f",(mile1+mile2+mile3)/time) :
    (time == 4)?printf("enter miles travelled in first hour :"),scanf("%f", &mile1),printf("enter miles travelled in second hour :"),
    scanf("%f", &mile2),printf("enter miles travelled in third hour :"),scanf("%f", &mile3),printf("enter miles travelled in fourth hour :"),
    scanf("%f", &mile4),printf("Average speed is : %.2f",(mile1+mile2+mile3+mile4)/time) :
    (time == 5)?printf("enter miles travelled in first hour :"),scanf("%f", &mile1),printf("enter miles travelled in second hour :"),
    scanf("%f", &mile2),printf("enter miles travelled in third hour :"),scanf("%f", &mile3),printf("enter miles travelled in fourth hour :"),
    scanf("%f", &mile4),printf("enter miles travelled in fifth hour :"),scanf("%f", &mile5),printf("Average speed is : %.2f",(mile1+mile2+mile3+mile4+mile5)/time): printf("invalid inputs");

    return 0;
    
}