#include <stdio.h>

int main() {
    int arr[5001];
    for (int i = 0; i <= 5000; i++) {
        arr[i] = -1;
    }
    arr[3] = 1;
    arr[5] = 1;
    for (int i = 6; i <= 5000; i++) {
        if (arr[i - 3] != -1) {  // 3kg를 더할 수 있는 경우
            arr[i] = arr[i - 3] + 1;
        }
        if (arr[i - 5] != -1) {  // 5kg를 더할 수 있는 경우
            if (arr[i] == -1 || arr[i] > arr[i - 5] + 1) {
                arr[i] = arr[i - 5] + 1;
            }
        }
    }
    int N;
    scanf("%d", &N);
    printf("%d", arr[N]);

    return 0;
}