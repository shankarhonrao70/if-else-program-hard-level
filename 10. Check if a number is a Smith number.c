#include <stdio.h>
int main() {
    int num, original, sumDigits = 0, sumPrimeFactors = 0, i = 2;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        original = num;
        while (original != 0) {
            sumDigits += original % 10;
            original /= 10;
        }
        original = num;
        while (original > 1) {
            while (original % i == 0) {
                int factor = i;
                while (factor != 0) {
                    sumPrimeFactors += factor % 10;
                    factor /= 10;
                }
                original /= i;
            }
            i++;
        }
        if (sumDigits == sumPrimeFactors) {
            printf("Smith number\n");
        } else {
            printf("Not a Smith number\n");
        }
    } else {
        printf("Invalid input (non-positive number)\n");
    }
    return 0;
}