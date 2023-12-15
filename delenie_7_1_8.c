#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    int i;
    b = 0;
    for (i = 1; i <= a; i++)
    {

        if (a % i == 0)
        {
            printf("%d ", i);
            b++;
        }
    }

    printf("\n%d", b);
    return 0;
}