#include <stdio.h>

int main()
{
    int k;
    scanf("%d", &k);

    int res = k % 10;
    k = (k / 10) + (res * 100);

    printf("%d\n", k);

    return 0;
}
/*#include <stdio.h>

int main() {
int  a;
scanf("%d", &a);
printf("%d", a%10*100+a/10);
}*/