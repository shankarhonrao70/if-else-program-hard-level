#include <stdio.h>
int main() {
    int num, a = 2, b = 1, c, isLucas = 0, isPrime = 1, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        c = a + b;
        while (c <= num) {
            if (c == num) isLucas = 1;
            a = b;
            b = c;
            c = a + b;
        }
        if (isLucas) {
            for (i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime) {
                printf("Lucas prime number\n");
            } else {
                printf("Lucas but not prime\n");
            }
        } else {
            printf("Not a Lucas number\n");
        }
    } else {
        printf("Invalid input (non-positive number)\n");
    }
    return 0;
}