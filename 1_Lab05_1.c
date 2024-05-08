#include <stdio.h>

#include <stdio.h>

int main(void) {
    int x[10], i;
    int result = 0;
    int remain[10];
    for (i = 0; i < 10; ++i) {
        scanf("%d", &x[i]);
        remain[i] = x[i] % 42;
    }
    for (i = 0; i < 10; ++i) {
        int count = 0;
        for (int j = i + 1; j < 10; ++j) {
            if (remain[j] == remain[i])
                count++;
        }
        if (count == 0)
            result++;
    }
    printf("%d", result);

}