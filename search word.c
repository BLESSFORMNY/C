#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp;
	char fname[256];
	char buffer[256];
	char word[256];
	int line = 0;
	
	printf("Name of file : ");
	scanf("%s", fname);
	
	printf("Word that you want to search : ");
	scanf("%s", word);
	
	if ((fp = fopen(fname, "r")) == NULL)
	{
		fprintf(stderr, "Can't open file\n", fname);
		return 0;
	}
	
	while (fgets(buffer, 256, fp))
	{
		line++;
		if (strstr(buffer, word))
		{
			printf("Line %d : %s \n", line, word);
		}
	}
	
	fclose(fp);
	return 0;
}
