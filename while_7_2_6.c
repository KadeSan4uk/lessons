#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int i = 1;
    while (i * i <= N)
    {
        printf("%d ", i * i);
        i++;
    }

    return 0;
}
