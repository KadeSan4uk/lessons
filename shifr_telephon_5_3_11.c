#include <stdio.h>
int main()
{
    int x;
    int y1, y2, y3, y4;
    scanf("%d", &x);
    y1 = (x % 10000 / 1000 + 7) % 10;
    y2 = (x % 1000 / 100 + 7) % 10;
    y3 = (x % 100 / 10 + 7) % 10;
    y4 = (x % 10 + 7) % 10;
    int res = y3 * 1000 + y4 * 100 + y1 * 10 + y2;

    printf("%d", res);
    return 0;
}
/*
#include <stdio.h>

int main() {
    unsigned int x, x1, x2, x3, x4;
    unsigned int y, y1, y2, y3, y4;
    unsigned int k = 7, mod = 10;

    scanf("%u", &x);

    x4 = x % 10;        // 4-я цифра (единицы)
    x3 = x / 10 % 10;   // 3-я цифра (десятки)
    x2 = x / 100 % 10;  // 2-я цифра (сотни)
    x1 = x / 1000;      // 1-я цифра (тысячи)

    // шифруем и одновременно формируем новую перестановку разрядов
    // y1 = x3, y2 = x4, y3 = x1, y4 = x2
    y1 = (x3 + k) % mod;
    y2 = (x4 + k) % mod;
    y3 = (x1 + k) % mod;
    y4 = (x2 + k) % mod;

    y = y1*1000 + y2*100 + y3*10 + y4;

    printf("%u", y);
}
*/