#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b)
{
    int p;

    p = *a;
    *a = *a / *b;
    *b = p % *b;
}
int main()
{
    int a = 100;
    int b = 7;

    ft_ultimate_div_mod(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}