#include <stdio.h>

int main()
{
	int test;
	char arr[80];
	int sum, count;

	scanf("%d", &test);

	for (int i = 0; i < test; i++)
	{
		sum = 0; count = 1;
		scanf("%s", arr);
		for (int j = 0; j < strlen(arr); j++)
		{
			if (arr[j] == 'O')
			{
				sum += count;
				count++;
			}
			else count = 1;
		}
		printf("%d\n", sum);
	}
}