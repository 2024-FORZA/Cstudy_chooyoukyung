#include <stdio.h>
#include <math.h>

int round_up(int x) {
    int place = 10; // 처음에는 1의 자리에서 반올림
    while (x >= place) {
        x = (x + place / 2) / place * place; // 반올림 처리
        place *= 10; // 반올림 자리를 한 단계씩 올림
    }
    return x;
}

int main() {
    int n, x;
    scanf("%d", &n); // 테스트 케이스의 개수를 입력받음

    for (int i = 0; i < n; i++) {
        scanf("%d", &x); // 각 테스트 케이스의 값을 입력받음
        printf("%d\n", round_up(x)); // 반올림 결과 출력
    }

    return 0;
}