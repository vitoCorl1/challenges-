#include <stdio.h>

int main() {
    float kmh;
    printf("Enter speed in km/h: ");
    scanf("%f", &kmh);

    float ms = kmh * (5.0 / 18.0);
    printf("Speed in m/s: %.2f\n", ms);

    return 0;
}