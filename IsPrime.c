#include <stdio.h>
#include <math.h>

int main()
{
    int n, i = 2;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("The number is not prime\n");
        return 0;
    }

    while (i <= sqrt(n))
    {
        if (n % i == 0)
        {
            printf("The number is not prime\n");
            return 0;
        }
        i++;
    }

    printf("The number %d is a prime\n", n);
    return 0;
}
