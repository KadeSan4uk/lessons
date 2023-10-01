#include <stdio.h>
void ft_ft(int *nbr)
{
    *nbr;
}

int main()
{
    int i = 42;
    ft_ft(&i);
    printf("%d\n", i);

    return 0;
}