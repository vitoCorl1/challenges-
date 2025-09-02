#include <stdio.h>

int main(){
    int km;
    printf("Enter distence in km : ");
    scanf("%d", &km);
    float yard = km * 1093.61;
    printf("distance in yard : %0.2f", yard);
}