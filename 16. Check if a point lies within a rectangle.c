#include <stdio.h>
int main() {
    float x, y, x1 = -2, y1 = -1, x2 = 2, y2 = 1;
    printf("Enter x and y coordinates: ");
    scanf("%f %f", &x, &y);
    if (x >= x1 && x <= x2) {
        if (y >= y1 && y <= y2) {
            if ((x == x1 || x == x2) && (y == y1 || y == y2)) {
                printf("Point lies on the rectangle boundary\n");
            } else {
                printf("Point lies inside the rectangle\n");
            }
        } else {
            printf("Point lies outside the rectangle\n");
        }
    } else {
        printf("Point lies outside the rectangle\n");
    }
    return 0;
}