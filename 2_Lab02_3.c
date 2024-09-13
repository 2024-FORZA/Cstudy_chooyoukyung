#include <stdio.h>
#include <string.h>

char arr1[1000005];
int arr2[26];

int main() {
    int max = 0;
    int size;
    char answer;

    scanf("%s", arr1);
    size = strlen(arr1);

    for (int i = 0; i < size; i++)
        if (arr1[i] >= 'a') arr2[arr1[i] - 'a']++;
        else arr2[arr1[i] - 'A']++;

    for (int i = 0; i < 26; i++)
        if (arr2[i] == max) {
            answer = '?';
        }
        else if (arr2[i] > max) {
            max = arr2[i];
            answer = 'A' + i;
        }

    printf("%c", answer);

    return 0;
}