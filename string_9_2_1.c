#include <stdio.h>

int main()
{
    char arr[30] = {0};
    fgets(arr, sizeof(arr), stdin);
    int p = 0;
    for (int i = 0; i < 30; i++)
    {
        if (arr[i] != '\0' && arr[i] != '\n')
        {
            p += 1;
        }
    }
    printf("%d", p);
    return 0;
}