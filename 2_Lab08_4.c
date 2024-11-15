#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    int size;
    while (gets(s) != '\0') {
        size = strlen(s);
        int lower = 0, upper = 0, digits = 0, blank = 0;
        for (int i = 0; i < size; i++) {
            if (s[i] == 32) {
                blank++;
            }
            if (s[i] >= 47 && s[i] <= 58) {
                digits++;
            }
            if (s[i] >= 65 && s[i] <= 90) {
                upper++;
            }
            if (s[i] >= 97 && s[i] <= 122) {
                lower++;
            }
        }printf("%d %d %d %d\n", lower, upper, digits, blank);
    }
    return 0;
}