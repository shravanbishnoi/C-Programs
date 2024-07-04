#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    str[strcspn(str, "\n")] = 0;

    int longest = 0;
    int count = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (isalnum(str[i]))
        {
            count++;
        }
        else
        {
            if (count > longest)
            {
                longest = count;
            }
            count = 0;
        }
    }

    // Check the last word
    if (count > longest)
    {
        longest = count;
    }

    printf("The longest word is of length: %d\n", longest);
    return 0;
}
