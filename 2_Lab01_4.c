#include <stdio.h>

// 최대 공약수를 구하는 함수 (유클리드 호제법 사용)
long gcd(long a, long b) {
    while (b != 0) {
        long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 최소 공배수를 구하는 함수
long long lcm(long a, long b) {
    return a * (b / gcd(a, b));
}

int main() {
    int n;  // 테스트 케이스 개수
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        int a, b;
        scanf_s("%lld %lld", &a, &b);
        printf("%lld\n", lcm(a, b));
    }

    return 0;
}
