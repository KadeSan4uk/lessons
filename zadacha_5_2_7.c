#include <stdio.h>

int main()
{
    int k;
    scanf("%d", &k);

    int res = k / 100;
    k = (k % 100) * 10 + res;

    printf("%d\n", k);

    return 0;
}
/*#include <stdio.h>

int main() {
int  a;
scanf("%d", &a);
printf("%d", a%100*10+a/100);
}*/