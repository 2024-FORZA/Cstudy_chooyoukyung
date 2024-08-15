#include <stdio.h>
#include <math.h>

int round_up(int x) {
    int place = 10; // ó������ 1�� �ڸ����� �ݿø�
    while (x >= place) {
        x = (x + place / 2) / place * place; // �ݿø� ó��
        place *= 10; // �ݿø� �ڸ��� �� �ܰ辿 �ø�
    }
    return x;
}

int main() {
    int n, x;
    scanf("%d", &n); // �׽�Ʈ ���̽��� ������ �Է¹���

    for (int i = 0; i < n; i++) {
        scanf("%d", &x); // �� �׽�Ʈ ���̽��� ���� �Է¹���
        printf("%d\n", round_up(x)); // �ݿø� ��� ���
    }

    return 0;
}