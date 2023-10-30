#include <stdio.h>
#include <math.h>

int rast_osi();

int main()
{
    rast_osi();
    return 0;
}
int rast_osi()
{
    int x1, x2;
    int res;

    printf("Введите координаты точки x1: ");
    scanf("%d", &x1);
    printf("Введите координаты точки х2: ");
    scanf("%d", &x2);
    res = abs(x1 - x2);
    printf("Расстояние между х1 и х2 = %d", res);
    return res;
}