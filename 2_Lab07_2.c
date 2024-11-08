#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int* people = (int*)malloc(N * sizeof(int));
    int result[N];
    int count = 0, index = 0, step = 0;

    for (int i = 0; i < N; i++) {
        people[i] = i + 1;
    }
    while (count < N) {
        step = 0;
        while (step < K) {
            if (people[index] != 0) {
                step++;
            }
            if (step == K) break;
            index = (index + 1) % N;
        }
        result[count++] = people[index];
        people[index] = 0;
        index = (index + 1) % N;
    }
    printf("<");
    for (int i = 0; i < N; i++) {
        printf("%d", result[i]);
        if (i < N - 1) {
            printf(", ");
        }
    }
    printf(">\n");

    free(people);
    return 0;
}