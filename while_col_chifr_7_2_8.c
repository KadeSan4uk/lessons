#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int count = 0;

    while (N != 0)
    {
        N = N / 10;
        count++;
    }

    printf("%d\n", count);

    return 0;
}
