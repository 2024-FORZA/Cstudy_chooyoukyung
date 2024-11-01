#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int arr[100] = { 0 };
    int count = 0;
    for (int i = 0; i < N; i++) {
        int seat;
        scanf("%d", &seat);
        seat -= 1;
        if (arr[seat] == 0) {
            arr[seat] = 1;
        }
        else {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}