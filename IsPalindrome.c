#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char str[100];
    printf("Enter a string(Case sensitive): ");
    scanf("%99s", &str);
    bool IsPalindrome = true;
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            IsPalindrome = false;
        }
    }
    if (IsPalindrome)
    {
        printf("The String is palindrome");
    }
    else
    {
        printf("The String is not palindrome");
    }
}