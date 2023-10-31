#include <stdio.h>
#include <math.h>
double ras_toch();
int main()
{
    ras_toch();
    return 0;
}
double ras_toch()
{
    double x1, y1;
    double x2, y2;
    double res;

    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);
    res = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("%.2f", res);
    return res;
}