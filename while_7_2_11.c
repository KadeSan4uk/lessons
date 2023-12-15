#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    while (N > 0)
    {
        printf("%d", N % 10);
        N /= 10;
    }

    printf("\n");

    return 0;
}
