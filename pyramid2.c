#include <stdio.h>

int main()
{
	int N;
	int i, j;
	
	printf("피라미드의 높이 >>> ");
	scanf("%d", &N);
	printf("\n");
	
	for (i = 1; i <= N; i++)
	{
		for (j = N-i; j >= 0; j--)
		{
			printf(" ");
		}
		for (j = 1; j <= 2*i-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
