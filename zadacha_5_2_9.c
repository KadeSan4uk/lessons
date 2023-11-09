#include <stdio.h>
int main()
{
    int k, res, i, p, o;
    scanf("%d", &k);

    i = 60;
    res = k / i;
    p = res * i;
    o = k - p;

    printf("%d", o);
    return 0;
}
/*
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", n % 60);
    return 0;
}
*/