#include <stdio.h>

int main()
{
    int k, b, c;
    if (scanf("%d", &k), k < 0 || k > 12)
    {
        return 0;
    }
    b = 1;
    for (c = 1; c <= k; c++)
    {
        b *= c;
    }
    printf("%d", b);
    return 0;
}