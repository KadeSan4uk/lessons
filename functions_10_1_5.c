#include <stdio.h>

int factorial(int p)
{
    if (p == 0 || p == 1)
    {
        return 1;
    }
    else
    {
        return p * factorial(p - 1);
    }
}

int combin(int n, int k)
{
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main(void)
{
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);

        if (n < k || n > 12 || k < 0)
    {
        printf("error\n");
        return 1;
    }

    printf("%d\n", combin(n, k));

    return 0;
}
