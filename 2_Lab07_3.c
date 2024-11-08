#include <stdio.h>
#include <stdbool.h>

bool prime_number(int j) {
    if (j <= 1) {
        return false;
    }
    for (int i = 2; i < j; i++) {
        if (j % i == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    int N;
    int arr[100] = { 0 };
    int count = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        prime_number(arr[i]);
        if (prime_number(arr[i]) == true) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}