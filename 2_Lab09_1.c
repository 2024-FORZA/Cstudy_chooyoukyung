#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char file_names[50][51];
    char pattern[51];
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", file_names[i]);
    }
    int len = strlen(file_names[0]);
    for (int i = 0; i < len; i++) {
        char c = file_names[0][i];
        int same = 1;

        for (int j = 0; j < N; j++) {
            if (file_names[j][i] != c) {
                same = 0;
                break;
            }
        }
        if (same == 1) {
            pattern[i] = c;
        }
        else {
            pattern[i] = '?';
        }

    }
    pattern[len] = '\0';
    printf("%s\n", pattern);

    return 0;

}