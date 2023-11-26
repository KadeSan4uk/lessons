#include <stdio.h>

int main()
{
    int k, m;

    if (scanf("%d %d", &k, &m) != 2 || k >= m)
    {
        return 1;
    }

    int count = 0;

    for (int i = (k > 0) ? k : 1; i <= m; i++)
    {
        printf("%d ", i);
        count++;
    }

    printf("\n%d", count);

    return 0;
}
