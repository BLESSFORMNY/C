#include <stdio.h>

int main()
{
	int i, j;
	int TT[10][10];
	for (i = 1; i <= 9; i++)
	{
		printf("\n [ %d Time Table ]\n\n", i);
		for (j = 1; j <= 9; j++)
		{
			TT[i][j] = i * j;
			printf("%d * %d = %d, ", i, j, TT[i][j]);
		}
	}
	printf("\n\nDone");
	return 0;
}
