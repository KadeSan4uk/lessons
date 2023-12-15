#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int p = (a > b) ? a : b;
    int r = p;

    while (1)
    {
        if (r % a == 0 && r % b == 0)
        {
            break;
        }
        r += p;
    }

    printf("%d\n", r);

    return 0;
}
