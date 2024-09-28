#include <stdio.h>

int main() {
    int arr[9];
    int max = 0;
    int max_index = 0;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] >= max) {
            max = arr[i];
            max_index = i;
        }
    }
    printf("%d\n", max);
    printf("%d\n", max_index + 1);

    return 0;
}