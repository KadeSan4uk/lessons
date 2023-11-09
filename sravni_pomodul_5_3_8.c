#include <stdio.h>
int main()
{
    int m, i, p;
    scanf("%d %d %d", &m, &i, &p);
    printf("%d %d", i % m, p % m);
    return 0;
}