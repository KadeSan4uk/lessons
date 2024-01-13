#include <stdio.h>
#include <string.h>

int main()
{
    char arr[101] = {0};
    fgets(arr, sizeof(arr), stdin);

    char *start;
    char *end;

    while ((start = strstr(arr, "/*")) != NULL)
    {
        end = strstr(start + 2, "*/");
        if (end == NULL)
        {
            break;
        }

        int commentLength = end - start + 2;

        memmove(start, end + 2, strlen(end + 2) + 1);
    }

    printf("%s", arr);

    return 0;
}
