#include <stdio.h>

void convertDays(int days, int *years, int *weeks, int *remainingDays) {
    *years = days / 365;
    days %= 365;
    *weeks = days / 7;
    *remainingDays = days % 7;
}

int main() {
    int days, years, weeks, remainingDays;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    convertDays(days, &years, &weeks, &remainingDays);

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", remainingDays);

    return 0;
}