#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < i; k++)
			printf(" ");
		for (int k = 0; k < 2 * (n - i) - 1; k++)
			printf("*");
		printf("\n");
	}

	for (int i = 1; i < n; i++) {
		for (int k = n - i - 1; k > 0; k--)
			printf(" ");
		for (int k = 0; k < 2 * i + 1; k++)
			printf("*");
		printf("\n");
	}

	return 0;
}