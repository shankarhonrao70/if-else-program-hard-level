#include <stdio.h>
int main() {
    int num, digit, firstDigit, isRepdigit = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        firstDigit = num;
        while (firstDigit >= 10) firstDigit /= 10;
        digit = num % 10;
        while (num != 0) {
            if (num % 10 != digit) {
                isRepdigit = 0;
                break;
            }
            num /= 10;
        }
        if (isRepdigit) {
            printf("Repdigit number\n");
        } else {
            printf("Not a repdigit number\n");
        }
    } else {
        printf("Invalid input (non-positive number)\n");
    }
    return 0;
}