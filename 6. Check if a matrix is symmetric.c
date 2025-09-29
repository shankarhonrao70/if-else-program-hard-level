#include <stdio.h>
int main() {
    int rows, cols, i, j, isSymmetric = 1;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (rows == cols) {
        for (i = 0; i < rows; i++) {
            for (j = 0; j < i; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    isSymmetric = 0;
                    break;
                }
            }
            if (!isSymmetric) break;
        }
        if (isSymmetric) {
            printf("Symmetric matrix\n");
        } else {
            printf("Not a symmetric matrix\n");
        }
    } else {
        printf("Not a square matrix\n");
    }
    return 0;
}