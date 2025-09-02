#include <stdio.h>

int main(){
    int Years, Months, Days, Hours, Minutes, Seconds;
    printf("Enter the years : ");
    scanf("%d", &Years);
    Months = Years * 12;
    Days = Years * 365;
    Hours = Days * 24;
    Minutes = Hours * 60;
    Seconds = Minutes * 60;
    printf("in %d years the is \nMonths : %d\nDays : %d \nHours : %d \nMinutes : %d \nSeconds : %d", Years, Months, Days, Hours, Minutes, Seconds);
}