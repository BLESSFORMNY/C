#include <stdio.h>
#include <stdlib.h>

int main()
{
	int lotteryin = 0;
	printf("lotteryin-\n");
	for (int i = 0; i < 7; i++) {
		lotteryin = rand() % 46;
		printf("%d\n", lotteryin);
	}
	
	int WN = 0;
	printf("winning number-\n");
	for (int i = 0; i < 7; i++) {
		WN = rand() % 46;
		printf("%d\n", WN);
	}
	
	if (lotteryin == WN) {
			printf("Congratulation!");
		}
	else if (lotteryin != WN) {
			printf("Failed.");
		}
	return 0;
}
