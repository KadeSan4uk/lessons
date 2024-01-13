#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main(void)
{
    int num;

    scanf("%d", &num);

    if (num < 0 || num > 12)
    {
        printf("error\n");
    }
    else
    {

        printf("%d\n", factorial(num));
    }

    return 0;
}
