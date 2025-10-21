#include <stdio.h>

int main() {
    int a = 0, b = 1, c = 0;
    int sum = 0;

    printf("Fibonacci series up to 1000:\n");
    printf("%d\t%d\t", a, b);

    while (1) {
        c = a + b;
        if (c > 1000)
            break;
        printf("%d\t", c);

        if (c % 3 == 0 || c % 5 == 0 || c % 7 == 0) {
            sum = sum + c;
        }

        a = b;
        b = c;
    }

    printf("\n\nSum of Fibonacci numbers divisible by 3,5 or 7: %d\n", sum);

    return 0;
}
