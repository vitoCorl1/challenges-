#include <stdio.h>

int main(){
    int C;
    printf("Enter your temp in C: ");
    scanf("%d", &C);
    float K = C + 273.15;
    printf("temp in kelvin : %0.2f", K);
}