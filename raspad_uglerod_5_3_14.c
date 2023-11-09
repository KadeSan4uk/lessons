#include <stdio.h>
#include <math.h>
int main()
{
    double t = 5570.0;
    double n0 = 75;
    double ln2 = log(2.0);
    double g = ln2 / t;
    double res;
    int k;
    scanf("%d", &k);
    res = n0 * exp(-ln2 * k / t);
    printf("%.2lf", res);
    return 0;
}
/*
#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    printf("%.2lf", 75*exp(-t*log(2)/5570));
}
*/