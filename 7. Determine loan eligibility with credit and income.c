#include <stdio.h>
int main() {
    float income;
    int creditScore, yearsEmployed;
    printf("Enter income, credit score, years employed: ");
    scanf("%f %d %d", &income, &creditScore, &yearsEmployed);
    if (income >= 40000) {
        if (creditScore >= 700) {
            if (yearsEmployed >= 2) {
                printf("Eligible for loan\n");
            } else {
                printf("Not eligible (less than 2 years employed)\n");
            }
        } else {
            if (yearsEmployed >= 5) {
                printf("Eligible with conditions\n");
            } else {
                printf("Not eligible (low credit and experience)\n");
            }
        }
    } else {
        printf("Not eligible (low income)\n");
    }
    return 0;
}