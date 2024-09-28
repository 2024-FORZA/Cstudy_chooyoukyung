#include <stdio.h>

int main() {
    int N, original, count = 0;
    scanf("%d", &N);

    original = N;
    int input = -1;

    while (input != original) {
        int n = N / 10;
        int k = N % 10;
        int num = n + k;

        input = (k * 10) + (num % 10);

        N = input;
        count++;
    }

    printf("%d\n", count);
    return 0;
}