#include <stdio.h>
#include <stdlib.h>

int main() {
    int score[10] = { 0 };
    int sum = 0;
    int result = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &score[i]);
    }
    for (int i = 0; i < 10; i++) {
        int sum_plus = sum + score[i];
        if (abs(100 - sum_plus) <= abs(100 - sum)) {
            sum = sum_plus;
            result = sum;
        }
        else {
            break;
        }
    }
    printf("%d\n", result);
    return 0;
}