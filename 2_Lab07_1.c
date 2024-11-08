#include <stdio.h>

int main() {
    int A, B, C;
    int start, end;
    int time[100] = { 0 };
    int total_cost = 0;

    scanf("%d %d %d", &A, &B, &C);


    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &start, &end);
        for (int j = start; j < end; j++) {
            time[j]++;
        }
    }

    for (int i = 1; i <= 100; i++) {
        if (time[i] == 1) {
            total_cost += A;
        }
        else if (time[i] == 2) {
            total_cost += 2 * B;
        }
        else if (time[i] == 3) {
            total_cost += 3 * C;
        }
    }
    printf("%d\n", total_cost);

    return 0;
}