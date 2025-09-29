#include <stdio.h>
int main() {
    int num, original, remainder, sum = 0, i, seen[1000] = {0}, isHappy = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        original = num;
        while (sum != 1 && !seen[original]) {
            seen[original] = 1;
            sum = 0;
            while (original != 0) {
                remainder = original % 10;
                sum += remainder * remainder;
                original /= 10;
            }
            original = sum;
        }
        if (sum == 1) {
            printf("Happy number\n");
        } else {
            printf("Not a happy number\n");
        }
    } else {
        printf("Invalid input (non-positive number)\n");
    }
    return 0;
}