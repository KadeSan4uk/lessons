#include <stdio.h>

void ft_is_negative(int n)
{
    if (n > 0)
    {
        printf("%d positive number", n);
    }
    else if (n < 0)
    {
        printf("%d negative number", n);
    }
    else
    {
        printf("this number is zero");
    }
}
int main()
{
    int inputNumber;
    printf("Input your number\n");
    scanf("%d", &inputNumber);

    ft_is_negative(inputNumber);

    return 0;
}
