#include <stdio.h>

int main()
{
    int N;
    int p = 0;

    scanf("%d", &N);

    while (N != 0)
    {
        p += N;

        scanf("%d", &N);
    }
    printf("%d ", p);
    return 0;
}
