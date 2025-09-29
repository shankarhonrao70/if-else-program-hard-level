#include <stdio.h>
int main() {
    int num, original, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        original = num;
        while (original > 0) {
            digit = original % 10;
            if (digit == 0) {
                printf("Invalid (contains zero)\n");
                return 0;
            }
            sum += digit;
            original /= 10;
        }
        if (num % sum == 0) {
            printf("Harshad number\n");
        } else {
            printf("Not a Harshad number\n");
        }
    } else {
        printf("Invalid input (non-positive number)\n");
    }
    return 0;
}