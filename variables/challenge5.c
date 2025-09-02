#include<stdio.h>

int main(){
    int C;
    printf("Enter temp : ");
    scanf("%d", &C);
    if(C < 0){
        printf("Solide");
    }else if(0 <= C && C < 100){
        printf("liquide");
    }else if(C >= 100){
        printf("Gaz");
    }
}