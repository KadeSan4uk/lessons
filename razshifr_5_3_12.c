#include <stdio.h>
int main()
{
    int x;
    int y1, y2, y3, y4;
    scanf("%d", &x);
    y1 = (x % 10000 / 1000 + 3) % 10;
    y2 = (x % 1000 / 100 + 3) % 10;
    y3 = (x % 100 / 10 + 3) % 10;
    y4 = (x % 10 + 3) % 10;
    int res = y3 * 1000 + y4 * 100 + y1 * 10 + y2;

    printf("%d", res);
    return 0;
}