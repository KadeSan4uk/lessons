#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    while (N > 1 && N % 2 == 0)
    {
        N /= 2;
    }

    if (N == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
