/* Read a line of text and count the number of uppercase letters */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char line[81];
    int i, n, count = 0;

    printf("Input the line: \n");
    fgets(line, sizeof(line), stdin);

    line[strcspn(line, "\n")] = '\0';

    n = strlen(line);
    for (i = 0; i < n; i++)
    {
        if (isupper(line[i]))
            count++;
    }

    printf("\nThe number of uppercase letters in the string \"%s\" is %d\n", line, count);

    return 0;
}
