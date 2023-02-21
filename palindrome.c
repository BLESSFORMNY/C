#include <stdio.h>
#include <string.h>

int main()
{
    char input[1001];
    int i = 0, j = 0;
    
    fgets(input, 1001, stdin);
    input[strcspn(input, "\n")] = '\0';
    j = strlen(input) - 1;

    for (i = 0; i < strlen(input); i++)
    {
        if (input[i] == input[j])
        {
            j--;
        }
        else
        {
            printf("Not palindrome");
            return 0;
        }
    }

    printf("Palindrome");
    return 0;
}
