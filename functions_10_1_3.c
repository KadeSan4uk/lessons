#include <stdio.h>
int min(int a, int b, int c)
{
    int min;
    if (a < b && a < c)
    {
        min = a;
    }
    else if (b < a && b < c)
    {
        min = b;
    }
    else if (c < a && c < b)
    {
        min = c;
    }
    return min;
}
int main(void)
{
    int a = 0, b = 0, c = 0;
    scanf("%d%d%d", &a, &b, &c);
    int p = min(a, b, c);

    printf("%d", p);

    return 0;
}