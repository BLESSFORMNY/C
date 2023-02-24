#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp;
	char fname[256], buffer[256], word[256];
	int line = 0;
	
	printf("Name of file : ");
	scanf("%s", fname);
	printf("Word that you want to find : ");
	scanf("%s", word);
	
	
	if (strstr(fname, ".txt") == NULL)
	{
        printf("Error: Only .txt files are allowed\n");
        return 1;
    }
    
	if ((fp = fopen(fname, "r")) == NULL)
	{
		fprintf(stderr, "Error: Could not open file\n", fname);
		return 0;
	}
	
	while (fgets(buffer, 256, fp))
	{
		line++;
		if (strstr(buffer, word))
		{
			printf("Line %d : Word %s\n", line, word);
		}
	}
	
	fclose(fp);
	return 0;
}
