#include <stdio.h>
int main() {
    int n, k, i, j;
    scanf("%d", &n);
    for (k = 1; k <= n; k += 1) {
        for (i = n; i > k; i -= 1) {
            printf(" ");
        }
        for (j = 1; j <= k; j += 1) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}