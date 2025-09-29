#include <stdio.h>
int main() {
    int num, a = 0, b = 1, c, isFib = 0, isPrime = 1, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        c = a + b;
        while (c <= num) {
            if (c == num) isFib = 1;
            a = b;
            b = c;
            c = a + b;
        }
        if (isFib) {
            for (i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime) {
                printf("Fibonacci prime\n");
            } else {
                printf("Fibonacci but not prime\n");
            }
        } else {
            printf("Not a Fibonacci number\n");
        }
    } else {
        printf("Invalid input (non-positive number)\n");
    }
    return 0;
}