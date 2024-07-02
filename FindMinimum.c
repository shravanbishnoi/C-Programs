#include <stdio.h>

int main()
{
    int array[10], i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter the %d integer: ", i + 1);
        scanf("%d", &array[i]);
    }
    int min = 999999999;
    for (i = 0; i < 10; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    printf("Minimum integer is %d", min);
}
