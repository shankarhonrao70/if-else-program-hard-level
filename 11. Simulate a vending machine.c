#include <stdio.h>
int main() {
    int choice, amount;
    printf("Enter choice (1=Coffee, 2=Tea, 3=Juice) and amount: ");
    scanf("%d %d", &choice, &amount);
    if (choice >= 1 && choice <= 3) {
        if (amount >= 10 && amount <= 50) {
            if (choice == 1 && amount >= 15) {
                printf("Dispensing Coffee\n");
            } else if (choice == 2 && amount >= 12) {
                printf("Dispensing Tea\n");
            } else if (choice == 3 && amount >= 20) {
                printf("Dispensing Juice\n");
            } else {
                printf("Insufficient amount\n");
            }
        } else {
            printf("Invalid amount (10-50)\n");
        }
    } else {
        printf("Invalid choice\n");
    }
    return 0;
}