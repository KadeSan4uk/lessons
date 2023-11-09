#include <stdio.h>
#include <stdlib.h>
int main()
{
    int k;
    scanf("%d", &k);
    k = abs(k);
    printf("%d", (1 - 2 * (k % 2)));
    return 0;
}