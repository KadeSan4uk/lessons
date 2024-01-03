#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    int p = 0;
    int o;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        p += arr[i];
    }
    o = p / N;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] > o)
        {
            printf("%d ", arr[i]);
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] <= o)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
