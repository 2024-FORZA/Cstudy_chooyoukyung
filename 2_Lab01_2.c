#include <stdio.h>
#include <string.h>

int main() {
    char word[101];  // �ִ� 100������ �ܾ ������ �迭
    scanf_s("%s", word);

    int count = 0;  // ũ�ξ�Ƽ�� ���ĺ��� ������ ������ ����
    int length = strlen(word);

    for (int i = 0; i < length; i++) {
        // ũ�ξ�Ƽ�� ���ĺ� ���� Ȯ��
        if (word[i] == 'c' && (word[i + 1] == '=' || word[i + 1] == '-')) {
            i++;  // ���� ���ڸ� �ǳʶ�
        }
        else if (word[i] == 'd') {
            if (word[i + 1] == 'z' && word[i + 2] == '=') {
                i += 2;  // ���� �� ���ڸ� �ǳʶ�
            }
            else if (word[i + 1] == '-') {
                i++;  // ���� ���ڸ� �ǳʶ�
            }
        }
        else if ((word[i] == 'l' && word[i + 1] == 'j') ||
            (word[i] == 'n' && word[i + 1] == 'j')) {
            i++;  // ���� ���ڸ� �ǳʶ�
        }
        else if (word[i] == 's' && word[i + 1] == '=') {
            i++;  // ���� ���ڸ� �ǳʶ�
        }
        else if (word[i] == 'z' && word[i + 1] == '=') {
            i++;  // ���� ���ڸ� �ǳʶ�
        }
        // ���� ��츦 ������ �ٸ� ��� ���ĺ��� ������ 1�� ������Ŵ
        count++;
    }

    printf("%d\n", count);  // ��� ���
    return 0;
}