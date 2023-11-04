#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double const pi = 3.14159265358979323846;
int main()
{
    double r, h, v, p;
    scanf("%lf %lf", &r, &h);
    // r = 11; радиус
    // h = 29; высота
    v = h * pi * (r * r);               // формула обьема цилиндра
    p = (1.0 / 3.0) * pi * (r * r) * h; // формула обьема конуса
    printf("%.2lf %.2lf", v, p);        // обьем цилиндра и конуса
    return 0;
}