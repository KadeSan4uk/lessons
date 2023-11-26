#include <stdio.h>
int main()
{
    int k, m, i;
    if (scanf("%d %d", &k, &m), k < 1)
    {
        k = 1;
    }

    for (i = k; i <= m; i++)
    {
        printf("%d ", i);
    }
    return 0;
}