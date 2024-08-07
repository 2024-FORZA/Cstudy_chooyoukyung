#include<stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int hang = abs(((b - 1) / 4 + 1) - ((a - 1) / 4 + 1));
    int yal = abs(((b - 1) % 4) - ((a - 1) % 4));

    printf("%d", hang + yal);

    return 0;
}