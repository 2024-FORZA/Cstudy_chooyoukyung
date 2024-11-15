#include <stdio.h>

int main() {
    int N;
    int M;
    int baskets[101];

    scanf("%d %d", &N, &M);
    for (int i = 1; i <= N; i++) {
        baskets[i] = i;
    }
    for (int k = 0; k < M; k++) {
        int i;
        int j;
        scanf("%d %d", &i, &j);

        int temp = baskets[i];
        baskets[i] = baskets[j];
        baskets[j] = temp;
    }
    for (int i = 1; i <= N; i++) {
        if (i != 1) {
            printf(" ");
        }
        printf("%d", baskets[i]);
    }
    return 0;
}