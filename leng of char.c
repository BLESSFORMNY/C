#include <stdio.h>
#include <string.h>

int main()
{
	char input[10001];
	char ininput[10001];
	int count = 0;
	gets(input);
	printf("%d\n", strlen(input));
	gets(ininput);
	while (ininput[count] != '\0')
	{
		count++;
	}
	printf("%d", count);
    return 0;
}
