#include <stdio.h>
#include <string.h>

int main()
{
	char input[1001];
	int num = 0;
	gets(input);
	while (num < strlen(input))
	{
		num++;
	}
	printf("%s's length is %d", input, num);
	return 0;
}
