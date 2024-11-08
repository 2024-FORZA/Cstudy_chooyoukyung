#include <stdio.h>

int main() {
    int N, count = 0;
    int coins[] = { 500, 100, 50, 10, 5, 1 };
    scanf("%d", &N);

    int remain = 1000 - N;

    for (int i = 0; i < 6; i++) {
        count += remain / coins[i];
        remain %= coins[i];
    }

    printf("%d\n", count);
    return 0;
}