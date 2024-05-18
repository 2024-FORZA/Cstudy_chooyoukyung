#include <stdio.h>

int main() {
    int divisor = 0;
    long long max = 0, min = 1000001;

    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d", &divisor);

        if (divisor > max)
            max = divisor;
        if (divisor < min)
            min = divisor;
    }
    printf("%lld\n", max * min);

    return 0;
}