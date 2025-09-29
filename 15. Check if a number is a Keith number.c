#include <stdio.h>
int main() {
    int num, original, len = 0, i, j, isKeith = 1;
    int arr[20];
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        original = num;
        while (original != 0) {
            arr[len++] = original % 10;
            original /= 10;
        }
        int sum = 0;
        for (i = 0; i < len; i++) sum += arr[i];
        i = len;
        while (sum < num) {
            sum = 0;
            for (j = 1; j <= len; j++) {
                sum += arr[i - j];
            }
            arr[i++] = sum;
        }
        if (sum == num) {
            printf("Keith number\n");
        } else {
            printf("Not a Keith number\n");
        }
    } else {
        printf("Invalid input (non-positive number)\n");
    }
    return 0;
}