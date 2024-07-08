#include <stdio.h>

int main()
{
    int array[] = {3, 0, 0, 4, -3, 0, 5, 3, 5, 1, 0};
    int key = 0;
    int length = sizeof(array) / sizeof(array[0]);
    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (key == array[i])
        {
            count += 1;
        }
    }
    if (count > 0)
    {
        printf("The key count in the given array is %d\n", count);
    }
    else
    {
        printf("The key is not present in the given array.\n");
    }

    return 0;
}
