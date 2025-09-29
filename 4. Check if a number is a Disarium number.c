#include <stdio.h>
int main() {
    int num, original, digit, position = 1, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        original = num;
        temp = num;
        // Count digits to determine position
        while (temp > 0) {
            position++;
            temp /= 10;
        }
        position--; // Adjust for 1-based indexing
        temp = num;
        // Calculate sum of digits raised to their positions
        while (temp > 0) {
            digit = temp % 10;
            int power = 1;
            for (int i = 1; i <= position; i++) {
                power *= digit;
            }
            sum += power;
            temp /= 10;
            position--;
        }
        if (sum == num) {
            printf("Disarium number\n");
        } else {
            printf("Not a Disarium number\n");
        }
    } else {
        printf("Invalid input (non-positive number)\n");
    }
    return 0;
}