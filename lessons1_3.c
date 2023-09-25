#include <stdio.h>

void ft_print_numbers()
{

    char number = 0;
    while (number <= 9)
    {
        printf("%d\n", number);
        number++;
    }
}
int main()
{
    ft_print_numbers();
    return 0;
}
