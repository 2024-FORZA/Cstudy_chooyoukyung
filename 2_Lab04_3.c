#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d", &A, &B);
    scanf("%d", &C);

    int hour = C / 60;
    int minute = C % 60;

    int re_hour = A + hour + (B + minute) / 60;
    int re_minute = (B + minute) % 60;

    if (re_hour >= 24) {
        re_hour = re_hour - 24;
    }
    printf("%d %d\n", re_hour, re_minute);

    return 0;

}