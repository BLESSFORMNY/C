#include <stdio.h>
#include <stdlib.h>
int main()
{
	int GN = 0;
	int WN = 0;
	
	scanf("%d(The number is under 10)", &GN);
	for (int i = 0; i < 1; i++) {
		WN = rand() % 11;
	}
	printf("Guess The Number\n");
	printf("You select %d\n", GN);
	printf("The winning number is %d", WN);
	return 0;
}
