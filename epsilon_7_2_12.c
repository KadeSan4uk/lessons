#include <stdio.h>

int main()
{
    double eps, e = 1.0, p = 1.0;
    int k = 1;

    scanf("%lf", &eps);

    while (p >= eps)
    {
        p /= k;
        e += p;
        k++;
    }

    printf("%.8lf\n", e);

    return 0;
}
