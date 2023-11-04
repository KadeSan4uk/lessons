#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a; // rebro kuba
    int b; // ploshad odnoy grani kuba
    int c; // ploshad vsey poverhnosti kuba
    int d; // objem kuba
    int res;
    scanf("%d", &a);

    b = a * a;
    c = b * 6;
    d = a * a * a;

    printf("%d %d %d", b, c, d);
    return 0;
}