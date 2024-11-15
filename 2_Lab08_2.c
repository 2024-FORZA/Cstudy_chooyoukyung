#include <stdio.h>
#include <string.h>

int sum_of_digits(const char* number) {
    int sum = 0;
    for (int i = 0; number[i] != '\0'; i++) {
        sum += number[i] - '0';
    }
    return sum;
}

int main() {
    char X[1000001];
    int count = 0;

    scanf("%s", X);


    while (strlen(X) > 1) {
        int sum = sum_of_digits(X);
        sprintf(X, "%d", sum);
        count++;
    }

    int final_digit = X[0] - '0';
    printf("%d\n", count);
    if (final_digit % 3 == 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}