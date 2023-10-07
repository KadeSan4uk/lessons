#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}
int main()
{
    int a = 100;
    int b = 7;
    int p;
    int i;
    ft_div_mod(a, b, &p, &i);
    printf("division: %d\n", p);
    printf("remainder: %d\n", i);
    return 0;
}