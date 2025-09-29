#include <stdio.h>
int main() {
    float temp1, temp2, temp3;
    printf("Enter three temperature readings: ");
    scanf("%f %f %f", &temp1, &temp2, &temp3);
    if (temp1 >= -20 && temp3 <= 50) {
        if (temp2 >= temp1 && temp2 <= temp3) {
            if ((temp3 - temp1) <= 5) {
                printf("Stable temperature profile\n");
            } else {
                printf("Unstable (large range)\n");
            }
        } else {
            printf("Unstable (non-increasing order)\n");
        }
    } else {
        printf("Invalid temperature range\n");
    }
    return 0;
}