#include <stdio.h>

int main(){
    int num1, num2;
    printf("Enter first num : ");
    scanf("%d", &num1);
    printf("Enter secend num : ");
    scanf("%d", &num2);
    int sum = num1 + num2;
    if(num1 == num2){
        sum *= 3;
    }
    printf("sum = %d", sum);
}