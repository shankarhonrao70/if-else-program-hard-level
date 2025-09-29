#include <stdio.h>
int main() {
    int num, sum = 0, i, limit;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        limit = num / 2; // Optimize by checking up to half
        for (i = 1; i <= limit; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        if (sum == num) {
            printf("Perfect number\n");
        } else {
            if (sum > num) {
                printf("Abundant number\n");
            } else {
                printf("Deficient number\n");
            }
        }
    } else {
        printf("Invalid input (non-positive number)\n");
    }
    return 0;
}