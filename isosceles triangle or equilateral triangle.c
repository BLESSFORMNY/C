#include <stdio.h>

struct triangle
{
	int a;
	int b;
	int c;
};

int main()
{
	struct triangle tri;
	
	printf("1 side of triangle's length >>> ");
	scanf("%d", &tri.a);
	printf("2 side of triangle's length >>> ");
	scanf("%d", &tri.b);
	printf("3 side of triangle's length >>> ");
	scanf("%d", &tri.c);
	
	if (tri.a == tri.b || tri.a == tri.c || tri.b == tri.c)
	{
		if (tri.a == tri.b && tri.a == tri.c)
		{
			printf("This triangle is equilateral triangle");
		}
		else
		{
			printf("This triangle is isosceles triangle");
		}
	}
	else
	{
		printf("This triangle is not isosceles triangle and equilateral triangle");
	}
	return 0;
}
