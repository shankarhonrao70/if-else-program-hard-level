#include <stdio.h>
int main() {
    float amount;
    int membership;
    printf("Enter purchase amount and membership level (1-3): ");
    scanf("%f %d", &amount, &membership);
    if (amount >= 100) {
        if (membership == 1) {
            if (amount >= 500) {
                printf("Discount: 15%%\n");
            } else {
                printf("Discount: 10%%\n");
            }
        } else if (membership == 2) {
            if (amount >= 500) {
                printf("Discount: 20%%\n");
            } else {
                printf("Discount: 15%%\n");
            }
        } else if (membership == 3) {
            if (amount >= 500) {
                printf("Discount: 25%%\n");
            } else {
                printf("Discount: 20%%\n");
            }
        } else {
            printf("Invalid membership\n");
        }
    } else {
        printf("No discount (amount < 100)\n");
    }
    return 0;
}