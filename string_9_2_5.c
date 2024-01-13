#include <stdio.h>
#include <string.h>

int main()
{
    char arr[101] = {0};
    fgets(arr, sizeof(arr), stdin);

    int i, j;
    int count = 0;

    for (i = 0, j = 0; i < strlen(arr); ++i)
    {
        if (arr[i] != ' ')
        {
            arr[j++] = arr[i];
            count = 0;
        }
        else
        {
            if (!count)
            {
                arr[j++] = arr[i];
                count = 1;
            }
        }
    }
    arr[j] = '\0';

    printf("%s\n", arr);

    return 0;
}
