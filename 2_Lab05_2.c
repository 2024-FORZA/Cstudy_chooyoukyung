#include <stdio.h>

int max_gold_number = 0;

void find_gold_number(int current_num, int N) {
    if (current_num > N) return;

    if (current_num > max_gold_number) {
        max_gold_number = current_num;
    }
    find_gold_number(current_num * 10 + 4, N);
    find_gold_number(current_num * 10 + 7, N);
}

int main() {
    int N;
    scanf("%d", &N);

    find_gold_number(4, N);
    find_gold_number(7, N);

    printf("%d\n", max_gold_number);

    return 0;
}
