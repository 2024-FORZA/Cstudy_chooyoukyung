#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int alphabet[26], len, index;

    for (int i = 0; i < 26; i++) {
        alphabet[i] = -1;
    }
    scanf("%s", str);

    len = strlen(str);
    for (int i = 0; i < len; i++) {
        index = str[i] - 'a';
        if (alphabet[index] == -1) {
            alphabet[index] = i;
        }
        else {
            continue;
        }
    }
    for (int i = 0; i < 26; i++) {
        printf("%d\n", alphabet[i]);
    }
    return 0;

}