#include <stdio.h>
#include <stdbool.h>

// 소수 여부를 확인하는 함수
bool isPrime(int num) {
    if (num < 2) return false; // 1은 소수가 아님
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false; // 약수가 존재하면 소수가 아님
    }
    return true; // 소수임
}

int main() {
    int M, N;
    int sum = 0;
    int minPrime = 10001; // 최솟값을 큰 값으로 초기화 (주어진 범위 내 최대값보다 큼)

    // 입력 받기
    scanf("%d", &M);
    scanf("%d", &N);

    // 범위 내 소수 찾기
    for (int i = M; i <= N; i++) {
        if (isPrime(i)) {
            sum += i; // 소수의 합 계산
            if (i < minPrime) {
                minPrime = i; // 소수 중 최솟값 갱신
            }
        }
    }

    // 소수가 하나도 없는 경우
    if (sum == 0) {
        printf("-1\n");
    }
    else {
        printf("%d\n", sum); // 소수의 합 출력
        printf("%d\n", minPrime); // 최솟값 출력
    }

    return 0;
}