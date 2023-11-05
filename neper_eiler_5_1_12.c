#include <stdio.h>

int main()
{
    double e_4, e_5, e_6;

    e_4 = 1.0; // Начальное значение для 4 членов
    e_4 += 1.0 / 1;
    e_4 += 1.0 / 1;
    e_4 += 1.0 / 2;
    e_4 += 1.0 / 6;

    e_5 = e_4; // Используем результат для 4 членов
    e_5 += 1.0 / 24;

    e_6 = e_5; // Используем результат для 5 членов
    e_6 += 1.0 / 120;

    printf("%.5f\n", e_4 - 1.0);
    printf("%.5f\n", e_5 - 1.0);
    printf("%.5f\n", e_6 - 1.0);

    return 0;
}
/*#include <stdio.h>

int main() {
  double e=1+1+(double)1/2;
  printf("%.5lf\n", e+=(double)1/6);
  printf("%.5lf\n", e+=(double)1/24);
  printf("%.5lf\n", e+=(double)1/120);
}*/
