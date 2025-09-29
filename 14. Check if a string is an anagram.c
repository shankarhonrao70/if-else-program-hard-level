#include <stdio.h>
#include <string.h>
int main() {
    char str1[20], str2[20];
    int len1, len2, i, j, isAnagram = 1;
    printf("Enter two strings: ");
    scanf("%s %s", str1, str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    if (len1 == len2) {
        for (i = 0; i < len1; i++) {
            for (j = 0; j < len2; j++) {
                if (str1[i] == str2[j]) {
                    str2[j] = '0';
                    break;
                }
            }
            if (j == len2) {
                isAnagram = 0;
                break;
            }
        }
        if (isAnagram) {
            printf("Anagram\n");
        } else {
            printf("Not an anagram\n");
        }
    } else {
        printf("Not an anagram (different lengths)\n");
    }
    return 0;
}