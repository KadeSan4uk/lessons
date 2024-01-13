#include <stdio.h>

void square(int n, char c)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
}

int main(void)
{
    int n;
    char c;
    scanf("%d", &n);

    scanf(" %c", &c);
    square(n, c);

    return 0;
}
