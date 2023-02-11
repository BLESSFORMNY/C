#include <stdio.h>
#include <stdlib.h>

int main()
{
	int LI = 0;
	printf("lottery in-\n");
	for (int i = 0; i < 7; i++) {
		LI = rand() % 46;
		printf("%d\n", LI);
	}
	
	int WN = 0;
	printf("winning number-\n");
	for (int i = 0; i < 7; i++) {
		WN = rand() % 46;
		printf("%d\n", WN);
	}
	
	if (LI == WN) {
			printf("Congratulation!");
		}
	else if (LI != WN) {
			printf("Failed.");
		}
	return 0;
}
