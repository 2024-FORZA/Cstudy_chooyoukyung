#include <stdio.h>

int main() {
    int N;
    int count[10] = { 0 };
    scanf("%d", &N);


    while (N > 0) {
        count[N % 10]++;
        N /= 10;
    }


    int six_nine = (count[6] + count[9] + 1) / 2;
    count[6] = six_nine;
    count[9] = six_nine;


    int max_count = 0;
    for (int i = 0; i < 10; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
        }
    }

    printf("%d", max_count);
    return 0;
}
