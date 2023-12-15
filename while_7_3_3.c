#include <stdio.h>

int main()
{
    int N, count;
    count = 0;

    scanf("%d", &N);
    if (N == -9999)
    {
        printf("NO\n");
        return 0;
    }

    do
    {
        if (N < 0 && N != -9999)
        {
            count = -1;
        }
        else if (count == 0)
        {
            count = 1;
        }

        scanf("%d", &N);

    } while (N != -9999);

    printf("%s\n", count <= 0 ? "NO" : "YES");

    return 0;
}
