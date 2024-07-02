#include <stdio.h>
#define size 10
int main()
{
    int array[size], i;
    for (i = 0; i < size; i++)
    {
        printf("Enter the %d integer: ", i + 1);
        scanf("%d", &array[i]);
    }
    int min = 999999999;
    for (i = 0; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    printf("Minimum integer is %d", min);
}
