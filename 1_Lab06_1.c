#include <stdio.h>
#include <string.h>
int main() {
    int test, repeat;
    char str[20];
    scanf("%d", &test);
    for (int i = 0; i < test; i++) {
        scanf("%d %s", &repeat, str);

        for (int j = 0; j < strlen(str); j++) {
            for (int k = 0; k < repeat; k++) {
                printf("%c", str[j]);
            }
        }
        printf("\n");
    }
}