#include<stdio.h>

int main() {

    int day, month, year, days ;

    printf("Enter the days of year: ");
    scanf("%d", &days);

    year = days / 365;      // 1 year = 365 days
    days %= 365;
    month = days / 30;   // month calculation
    day = days % 30;

    printf("%d ano(s)\n", year);
    printf("%d mes(es)\n", month);
    printf("%d dia(s)\n", day);

    return 0;
}
