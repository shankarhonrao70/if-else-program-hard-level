#include <stdio.h>
int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    printf("Enter coordinates (x1,y1,x2,y2,x3,y3,x4,y4): ");
    scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
    int d1 = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1); // Side 1 squared
    int d2 = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2); // Side 2 squared
    int d3 = (x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3); // Side 3 squared
    int d4 = (x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4); // Side 4 squared
    if (d1 > 0 && d2 > 0 && d3 > 0 && d4 > 0) {
        if (d1 == d2 && d2 == d3 && d3 == d4) {
            int diag1 = (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1);
            int diag2 = (x4 - x2) * (x4 - x2) + (y4 - y2) * (y4 - y2);
            if (diag1 == diag2) {
                printf("Square\n");
            } else {
                printf("Rectangle but not square\n");
            }
        } else {
            printf("Not a square or rectangle\n");
        }
    } else {
        printf("Invalid quadrilateral (zero distance)\n");
    }
    return 0;
}