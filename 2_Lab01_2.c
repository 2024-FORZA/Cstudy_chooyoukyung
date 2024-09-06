#include <stdio.h>
#include <string.h>

int main() {
    char word[101];  // 최대 100글자의 단어를 저장할 배열
    scanf_s("%s", word);

    int count = 0;  // 크로아티아 알파벳의 개수를 저장할 변수
    int length = strlen(word);

    for (int i = 0; i < length; i++) {
        // 크로아티아 알파벳 조합 확인
        if (word[i] == 'c' && (word[i + 1] == '=' || word[i + 1] == '-')) {
            i++;  // 다음 문자를 건너뜀
        }
        else if (word[i] == 'd') {
            if (word[i + 1] == 'z' && word[i + 2] == '=') {
                i += 2;  // 다음 두 문자를 건너뜀
            }
            else if (word[i + 1] == '-') {
                i++;  // 다음 문자를 건너뜀
            }
        }
        else if ((word[i] == 'l' && word[i + 1] == 'j') ||
            (word[i] == 'n' && word[i + 1] == 'j')) {
            i++;  // 다음 문자를 건너뜀
        }
        else if (word[i] == 's' && word[i + 1] == '=') {
            i++;  // 다음 문자를 건너뜀
        }
        else if (word[i] == 'z' && word[i + 1] == '=') {
            i++;  // 다음 문자를 건너뜀
        }
        // 위의 경우를 제외한 다른 모든 알파벳은 개수를 1씩 증가시킴
        count++;
    }

    printf("%d\n", count);  // 결과 출력
    return 0;
}