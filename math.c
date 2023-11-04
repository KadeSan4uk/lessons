#include <stdio.h>
#include <math.h>
double math_pri();
int main()
{
    math_pri();
    return 0;
}
double math_pri()
{
    double a, b, c, d, e, f, h;
    scanf("%lf %lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f, &h);
    double res;
    res = a / (b * (c / ((d * e) / (f * h))));

    printf("%.2lf", res);
    return res;
}