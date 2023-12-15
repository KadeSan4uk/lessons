#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    while (N != -9999)
    {
        printf("%d ", N);
        scanf("%d", &N);
    }

    return 0;
}
