#include <stdio.h>
#include <string.h>

int main()
{
    char input[1001];
    int vowels = 0, i;

    gets(input);

    for (i = 0; i < strlen(input); i++)
    {
        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u')
        {
            vowels++;
        }
    }

    printf("%s has %d vowels", input, vowels);

    return 0;
}
