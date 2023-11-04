#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double const p = 3.14159265358979323846;
int main()
{
    double ri, ro, sh;
    long double res;
    scanf("%lf %lf", &ri, &ro);
    // ri = 122200;
    // ro = 136800;
    sh = ro - ri;
    res = p * (pow(ro, 2) - pow(ri, 2)) * 100;

    printf("%.0lf %.2Lf", sh, res);
    return 0;
}