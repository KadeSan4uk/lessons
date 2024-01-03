#include <stdio.h>

int main()
{
    int N, p, o;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    o = arr[N - 1];
    p = 0;

    for (int i = 0; i < N - 1; i++)
    {
        if (arr[i] < o && arr[i] > arr[0])
        {
            printf("%d ", arr[i]);
            p = 1;
        }
    }

    if (!p)
    {
        printf("0");
    }

    return 0;
}
