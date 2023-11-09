#include <stdio.h>
#include <math.h>
int main()
{
    double po = 1.29, z = 1.25e-4, res;
    int h;
    scanf("%d", &h);
    res = po * exp(-h * z);
    printf("%.2lf", res);
    return 0;
}
/*
#include <stdio.h>
#include <math.h>

int main() {
    int h;
    scanf("%d", &h);
    double p0 = 1.29;
    double z = 1.25 * 1e-4; //1e-4 это 10-4 степени!
    double p = p0 * exp(-h * z);
    printf("%.2lf", p);
    return 0;
}
*/