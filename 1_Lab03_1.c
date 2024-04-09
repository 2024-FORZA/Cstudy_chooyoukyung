#include <stdio.h>

int main() {
    int a, b, c, k;
    scanf("%d %d %d", &a, &b, &c);
    if (a <= b)
        if (b <= c)
            k = b;
        else
            if (a <= c)
                k = c;
            else
                k = a;
    else
        if (b >= c)
            k = b;
        else
            if (c >= a)
                k = a;
            else
                k = c;
    printf("%d", k);

    return 0;

}