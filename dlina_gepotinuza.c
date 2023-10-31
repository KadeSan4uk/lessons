#include <stdio.h>
#include <math.h>
/*Даны длины катетов прямоугольного треугольника.
Вычислить длину гипотенузы.
 Простая задачка на знание теоремы Пифагора.*/
int main(void)
{
    int a, b, c2;

    scanf("%d", &a);
    scanf("%d", &b);

    c2 = a * a + b * b;
    printf("c = %.2f\n", sqrt(c2));

    return 0;
}