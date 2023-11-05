#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int a1 = a % 10;
    int a2 = (a / 10) % 10;
    int a3 = (a / 100) % 10;
    int a4 = (a / 1000) % 10;
    int nech = a4 * a2;
    int chet = a3 * a1;
    double res = (double)nech / chet;
    printf("%.2lf", res);
    return 0;
}