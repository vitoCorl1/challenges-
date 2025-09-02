#include <stdio.h>

int main (){
    int grade;
    printf("Enter he's grade : ");
    scanf("%d", &grade);
    if(grade > 10 && grade < 0){
        printf("fail");
    }else if(grade < 10 && grade > 12){
        printf("pass");
    }else if(grade < 12 && grade > 14){
        printf("fair");
    }else if(grade < 14 && grade > 16){
        printf("good");
    }else{
        printf("very good");
    }
}