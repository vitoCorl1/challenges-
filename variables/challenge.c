#include <stdio.h>

int main(){
    char first_name[10], Last_name[10], email[30];
    int age;
    printf("Enter your first name : ");
    scanf("%s", first_name);
    printf("Enter your last name : ");
    scanf("%s", Last_name);
    printf("Enter youe age : ");
    scanf("%d", &age);
    printf("Enter your email : ");
    scanf("%s", email); 
    printf("/////////////////////////////////////////\n");
    printf("First name is : %s\n", first_name);
    printf("Last name is : %s\n", Last_name);
    printf("age is : %d\n", age);
    printf("email is : %s\n", email);
}