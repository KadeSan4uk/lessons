#include <stdio.h>
int main()
{
    double M;
    double p, n;
    scanf("%lf", &M);

    n = 454.0;
    p = M * n / 1000;
    printf("%.2lf", p);

    return 0;
}