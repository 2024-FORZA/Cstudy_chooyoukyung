#include <stdio.h>

int dog_attack(int t, int attack, int rest) {
    int c = attack + rest;
    int now = t % c;

    if (now <= attack && now != 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int A, B, C, D;
    int P, M, N;

    scanf("%d %d %d %d", &A, &B, &C, &D);
    scanf("%d %d %d", &P, &M, &N);
    int times[3] = { P,M,N };

    for (int i = 0; i < 3; i++) {
        int t = times[i];
        int attacks = 0;

        if (dog_attack(t, A, B)) {
            attacks++;
        }
        if (dog_attack(t, C, D)) {
            attacks++;
        }
        printf("%d\n", attacks);

    }
    return 0;

}