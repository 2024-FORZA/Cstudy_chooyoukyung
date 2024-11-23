#include <stdio.h>

int main() {
    int x;
    int y;
    int days_in_month[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    char* weekdays[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

    scanf("%d %d", &x, &y);

    int total_days = y;
    for (int i = 1; i < x; i++) {
        total_days = total_days + days_in_month[i];
    }
    int day = total_days % 7;
    printf("%s\n", weekdays[day]);

    return 0;
}