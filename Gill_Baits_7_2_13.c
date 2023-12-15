#include <stdio.h>

int main(void)
{
    int a = 0, k = 0;
    int res = 1;

    scanf("%d %d", &a, &k);

    while (k > 0)
    {
        if (k % 2 == 0)
        {
            a = a * a;
            k = k / 2;
        }
        else
        {
            res = res * a;
            k = k - 1;
        }
    }
    printf("%d\n", res);

    return 0;
}