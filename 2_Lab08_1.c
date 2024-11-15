#include <stdio.h>

int N;
char str[1000005], tmp;

char decode[4][4] = {
	{'A', 'C', 'A', 'G'},
	{'C', 'G', 'T', 'A'},
	{'A', 'T', 'C', 'G'},
	{'G', 'A', 'G', 'T'} };

int index(char c)
{
	switch (c)
	{
	case 'A':
		return 0;
	case 'G':
		return 1;
	case 'C':
		return 2;
	case 'T':
		return 3;
	}
}

int main(void)
{
	scanf("%d", &N);
	scanf("%s", str);

	while (N != 1)
	{
		str[N - 2] = decode[index(str[N - 2])][index(str[N - 1])];
		N--;
	}

	printf("%c", str[0]);
	return 0;
}