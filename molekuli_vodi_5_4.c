#include <stdio.h>
int main()
{
    long double x = 3e-23; // massa molekuli
    float m = 0.05;        // massa kapli
    float cup = 249.5;     // massa stakana vodi
    int cups;
    scanf("%d", &cups);
    long double w = cups * cup / m;  // kolvo kapel v stakanah
    long double wm = cups * cup / x; // kolvo molekul v stakanah
    printf("%.0Lf %.3Le", w, wm);
    return 0;
}