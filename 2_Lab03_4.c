#include <stdio.h>

int YM(int arr[], int count) {
    int sum_Y = 0;
    int sum_M = 0;
    for (int i = 0; i < count; i++) {
        int Y = ((arr[i] / 30) + 1) * 10;
        int M = ((arr[i] / 60) + 1) * 15;
        sum_Y += Y;
        sum_M += M;
    }
    if (sum_Y > sum_M) {
        printf("%s %d", "M", sum_M);
    }
    else if (sum_Y == sum_M) {
        printf("%s %d", "Y M", sum_Y);
    }
    else {
        printf("%s %d", "Y", sum_Y);
    }
}

int main() {
    int arr[20];
    int N;
    scanf("%d", &N);
    for (int j = 0; j < N; j++) {
        scanf("%d", &arr[j]);
    }
    YM(arr, N);

    return 0;
}