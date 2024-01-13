#include <stdio.h>

int sequence_multipliers(int x)
{
    for (int k = 1; k * (k + 1) * (k + 2) <= x; k++)
    {
        if (k * (k + 1) * (k + 2) == x)
        {
            return k;
        }
    }
    return -1;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int result = sequence_multipliers(n);

    if (result == -1)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", result);
    }

    return 0;
}
