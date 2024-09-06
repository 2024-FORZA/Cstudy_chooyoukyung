#include <stdio.h>

// �ִ� ������� ���ϴ� �Լ� (��Ŭ���� ȣ���� ���)
long gcd(long a, long b) {
    while (b != 0) {
        long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// �ּ� ������� ���ϴ� �Լ�
long long lcm(long a, long b) {
    return a * (b / gcd(a, b));
}

int main() {
    int n;  // �׽�Ʈ ���̽� ����
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        int a, b;
        scanf_s("%lld %lld", &a, &b);
        printf("%lld\n", lcm(a, b));
    }

    return 0;
}
