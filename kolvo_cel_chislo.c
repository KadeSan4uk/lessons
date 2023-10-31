#include <stdio.h>
#include <math.h>

int kolvo_cel_chislo();

int main()
{
    kolvo_cel_chislo();
    return 0;
}
int kolvo_cel_chislo()
{
    int N;
    int res;
    scanf("%d", &N);
    res = pow(2, N); // возведение res в resN квадратных.
    printf("%d", res);
    return 0;
}