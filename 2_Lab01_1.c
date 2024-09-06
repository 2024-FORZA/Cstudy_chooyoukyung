#include<stdio.h>

int main() {
	char s[1000001];
	int cnt = 1, i;
	scanf_s("%s", s);
	for (i = 1; s[i] != '\0'; i++) {
		if (s[i] != s[i - 1]) {
			cnt++;
		}
	}
	printf("%d\n", cnt / 2);
	return 0;
}