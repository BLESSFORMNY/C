#include <stdio.h>

int cf(int c)
{
    int f;
    f = 180 / 100 * c + 32;
    return f;
}

int main()
{
    int c, f;
    
    printf("Input celsius temp >>> ");
    scanf("%d", &c);
    f = cf(c);
    printf("%d celsius temp is %d fahrenheit temp", c, f);
    return 0;
}

