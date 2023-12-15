#include <stdio.h>
int main()
{
    int a, b, c;
    if (scanf("%d %d", &a, &b), b <= a)
    {
        return 0;
    }
    for (int j = 0, i = a; i <= b; i++)
    {
        for (int k = j; k >= 0; k--)
            printf("%4d ", i);
        j++;
    }

    return 0;
}