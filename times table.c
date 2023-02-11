#include <stdio.h>

int main()
{
	int N, T, num;
	
	printf("몇 단을 원함? >>> ");
	scanf("%d", &N);
	printf("얼만큼? >>> ");
	scanf("%d", &T);
	
	for (num = 1; num <= T; num++) {
		printf("%d * %d = %d\n", N, num, N * num);
	}
	return 0;
}
