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
    printf("chislo x1 : ");
    scanf("%lf", &x1);
    printf("chislo y1 : ");
    scanf("%lf", &y1);
    printf("chislo x2 : ");
    scanf("%lf", &x2);
    printf("chislo y2 : ");
    scanf("%lf", &y2);
    res = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf(" Rezultat doljen bit 101.64 == %.2f", res);
    return res;
}