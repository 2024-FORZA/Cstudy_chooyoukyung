#include <stdio.h>

void J_BOX(int k) {
    for (int i = 0; i < k; i++) {
        printf("#");
    }
    printf("\n");
    for (int j = 0; j < k - 2; j++) {
        printf("#");
        for (int l = 0; l < k - 2; l++) {
            printf("J");
        }
        printf("#\n");
    }
    if (k > 1) {
        for (int i = 0; i < k; i++) {
            printf("#");
        }
        printf("\n");
    }
}


int main() {
    int N;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < N; i++) {
        J_BOX(arr[i]);
        if (i != N - 1) {
            printf("\n");
        }
    }
    return 0;
}