#include <stdio.h>
int main()
{
    int a, b, c;
    if (scanf("%d %d", &a, &b), b <= a)
    {
        return 0;
    }
    for (int i = a; i <= b; i++)
    {
        for (int k = i; k > 0; k--)
            printf("%3d ", i);
    }

    return 0;
}