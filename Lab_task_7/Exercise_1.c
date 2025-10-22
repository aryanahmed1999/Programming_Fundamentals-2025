#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;
    
    printf("Enter how many numbers you want to input: ");
    scanf("%d", &n);
    
    int arr[n];  

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            sum += arr[i];
            count++;
        }
    }

    if (count > 0)
        average = sum / count;
    else
        average = 0;  

    printf("\nSum of all positive numbers = %.2f", sum);
    printf("\nAverage of positive numbers = %.2f\n", average);

    return 0;
}
