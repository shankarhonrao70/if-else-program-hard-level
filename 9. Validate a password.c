#include <stdio.h>
#include <string.h>
int main() {
    char pass[20];
    printf("Enter password: ");
    scanf("%s", pass);
    int len = strlen(pass);
    if (len >= 8) {
        int hasUpper = 0, hasLower = 0, hasDigit = 0;
        for (int i = 0; i < len; i++) {
            if (pass[i] >= 'A' && pass[i] <= 'Z') hasUpper = 1;
            else if (pass[i] >= 'a' && pass[i] <= 'z') hasLower = 1;
            else if (pass[i] >= '0' && pass[i] <= '9') hasDigit = 1;
        }
        if (hasUpper && hasLower && hasDigit) {
            printf("Valid password\n");
        } else {
            printf("Password must contain upper, lower, and digit\n");
        }
    } else {
        printf("Password must be at least 8 characters\n");
    }
    return 0;
}