#include <stdio.h>
#define MINUTE_PER_HOUR 60
#define SECOND_PER_MINUTE 60

int main()
{
	int input = 3600;
	int hour = input / (MINUTE_PER_HOUR * SECOND_PER_MINUTE);
	int minute = (input % (MINUTE_PER_HOUR * SECOND_PER_MINUTE)) / SECOND_PER_MINUTE;
	int second = (input % (MINUTE_PER_HOUR * SECOND_PER_MINUTE)) % SECOND_PER_MINUTE;
	printf("%d second is %d hour %d minute %d second", input, hour, minute, second);
	return 0;
}
