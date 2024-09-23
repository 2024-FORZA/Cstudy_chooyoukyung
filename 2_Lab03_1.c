#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

#define MAX 50

int is_same(int A[MAX][MAX], int B[MAX][MAX], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] != B[i][j])
                return 0;
        }
    }
    return 1;
}

void flip(int A[MAX][MAX], int x, int y) {
    for (int i = x; i < x + 3; i++) {
        for (int j = y; j < y + 3; j++) {
            A[i][j] = 1 - A[i][j];
        }
    }
}

int main() {
    int n, m;
    int A[MAX][MAX], B[MAX][MAX];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%1d", &A[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%1d", &B[i][j]);
        }
    }

    if (n < 3 || m < 3) {
        if (is_same(A, B, n, m)) {
            printf("0\n");
        }
        else {
            printf("-1\n");
        }
        return 0;
    }

    int count = 0;
    for (int i = 0; i <= n - 3; i++) {
        for (int j = 0; j <= m - 3; j++) {
            if (A[i][j] != B[i][j]) {
                flip(A, i, j);
                count++;
            }
        }
    }

    if (is_same(A, B, n, m)) {
        printf("%d\n", count);
    }
    else {
        printf("-1\n");
    }

    return 0;
}