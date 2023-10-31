#include <stdio.h>
#include <math.h>
double ploch_tre();
int main()
{
    ploch_tre();

    return 0;
}
double ploch_tre()
{

    double a, b, c, p;
    double res;

    scanf("%lf %lf %lf", &a, &b, &c);
    p = (a + b + c) / 2;
    res = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.2lf", res);
    return res;
}