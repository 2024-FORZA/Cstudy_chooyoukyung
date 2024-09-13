#include <stdio.h>
#include <stdbool.h>

// �Ҽ� ���θ� Ȯ���ϴ� �Լ�
bool isPrime(int num) {
    if (num < 2) return false; // 1�� �Ҽ��� �ƴ�
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false; // ����� �����ϸ� �Ҽ��� �ƴ�
    }
    return true; // �Ҽ���
}

int main() {
    int M, N;
    int sum = 0;
    int minPrime = 10001; // �ּڰ��� ū ������ �ʱ�ȭ (�־��� ���� �� �ִ밪���� ŭ)

    // �Է� �ޱ�
    scanf("%d", &M);
    scanf("%d", &N);

    // ���� �� �Ҽ� ã��
    for (int i = M; i <= N; i++) {
        if (isPrime(i)) {
            sum += i; // �Ҽ��� �� ���
            if (i < minPrime) {
                minPrime = i; // �Ҽ� �� �ּڰ� ����
            }
        }
    }

    // �Ҽ��� �ϳ��� ���� ���
    if (sum == 0) {
        printf("-1\n");
    }
    else {
        printf("%d\n", sum); // �Ҽ��� �� ���
        printf("%d\n", minPrime); // �ּڰ� ���
    }

    return 0;
}