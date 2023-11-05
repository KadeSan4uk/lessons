#include <stdio.h>
int main()
{
    int k;
    scanf("%d", &k);
    int edin = k % 10;
    int des = (k / 10) % 10;
    int sot = k / 100;
    int reserved = edin * 100 + des * 10 + sot;
    printf("%d", reserved);

    return 0;
}
/*#include <stdio.h> не работает с отрицательными числами но красиво

int main() {
    int k1, k2, k3;
    scanf("%1d%1d%1d", &k1, &k2, &k3);
    printf("%d", k3*100 + k2*10 + k1);
    return 0;
}*/