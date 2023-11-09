#include <stdio.h>

int main()
{
    int k, x;

    scanf("%d %d", &k, &x);

    // Переводим число в десятичную систему
    int decimalNumber = 0;
    int multiplier = 1;

    while (x > 0)
    {
        int digit = x % 10;
        decimalNumber += digit * multiplier;
        multiplier *= k;
        x /= 10;
    }

    printf("%d\n", decimalNumber);

    return 0;
}
/*
#include <stdio.h>

int main() {
    int N, count = 0;
    double k, res = .0;
    scanf("%lf %d", &k, &N);

    while (N)
    {
        res += (N % 10) * pow(k, count);
        N /= 10;
        count++;
    }

    printf("%.lf\n", res);
  return 0;
}
*/