#include <stdio.h>
#include <math.h>
int main()
{
    double A, B;
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    A = sqrt(x1 * x1 + y1 * y1);
    B = sqrt(x2 * x2 + y2 * y2);
    if (A < B)
        printf("1\n");
    else if (B < A)
        printf("2\n");
    else
        printf("0\n");

    return 0;
}