#include <stdio.h>
void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main()
{
    int i = 0;
    int *nbr = &i;

    ft_ft(nbr);

    printf("%d\n", *nbr);

    return 0;
}