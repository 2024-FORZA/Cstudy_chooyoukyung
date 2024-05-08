#include <stdio.h>

int main() {
    int N, i, v;
    int count = 0;
    scanf("%d", &N);
    int x[N];
    for (i = 0; i < N; ++i) {
        scanf("%d", &x[i]);
    }
    scanf("%d", &v);
    for (i = 0; i < N; ++i) {
        if (x[i] == v)
            count++;
    }
    printf("%d", count);
}