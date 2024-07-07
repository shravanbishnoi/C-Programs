#include <stdio.h>

int main()
{
    int array[] = {3, 4, -3, 0, 5, 3, 5, 1, 0};
    int key = -1;
    int length = sizeof(array) / sizeof(array[0]);
    int found = 0;

    for (int i = 0; i < length; i++)
    {
        if (key == array[i])
        {
            printf("The key is present at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("The key is not present in the array\n");
    }
    return 0;
}
