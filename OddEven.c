#include <stdio.h>

int main()
{
    int number;
    printf("Enter an Integer: ");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("The number %d is Even", number);
    }
    else
    {
        printf("The number %d is Odd", number);
    }
}