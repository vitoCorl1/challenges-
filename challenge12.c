#include <stdio.h>

int main() {
    int num = 350;
    int mod = 0;
    int rev = 0;
    while(num != 0){
        mod = num % 10;
        rev = (rev * 10) + mod;
        num = num / 10;
    }
    printf("%d", rev);
}