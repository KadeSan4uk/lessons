#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int p = *a;
    *a = *b;
    *b = p;
}
int main()
{

    int a = 10;
    int b = 20;
    printf("%d  %d\n", a, b);
    ft_swap(&a, &b);
    printf("%d  %d\n", a, b);
    return 0;
}