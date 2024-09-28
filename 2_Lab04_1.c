#include <stdio.h>


int main() {
    int arr[100000];
    int N;
    int count = 1;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int max_height = arr[N - 1];

    for (int i = N - 2; i >= 0; i--) {
        if (arr[i] > max_height) {
            count++;
            max_height = arr[i];
        }
    }

    printf("%d\n", count);  // 보이는 막대기의 개수 출력

    return 0;
}