#include <stdio.h>
int main() {
    int light1, light2, speed;
    printf("Enter light1 (0=red, 1=green), light2 (0=red, 1=green), speed (km/h): ");
    scanf("%d %d %d", &light1, &light2, &speed);
    if (light1 == 1 && light2 == 1) {
        if (speed <= 60) {
            printf("Safe to proceed\n");
        } else {
            printf("Slow down (speed > 60 km/h)\n");
        }
    } else if (light1 == 0 && light2 == 0) {
        printf("Stop at both lights\n");
    } else {
        if (speed <= 30) {
            printf("Proceed with caution\n");
        } else {
            printf("Stop (speed > 30 km/h at caution)\n");
        }
    }
    return 0;
}