#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    scanf("%lf", &x);

    // Вычисление e^x с использованием функции exp
    double result_exp = exp(x);

    // Вычисление e^x с использованием суммы с 20 членами
    double result_sum = 1.0;
    double term = 1.0;

    for (int n = 1; n <= 5; n++)
    {
        term *= x / n;
        result_sum += term;
    }

    printf("%.6f\n", result_exp);
    printf("%.6f\n", result_sum);

    return 0;
}

/*
#include <stdio.h>
#include <math.h>
int main()
{
    double e, x;
    e = 1;
    x = 1;
    // scanf("%lf",&x);
    e = exp(e);
    printf("%.6lf", e);
    return 0;
}
*/
