#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (arr[i] == min)
        {
            arr[i] = max;
        }
        else if (arr[i] == max)
        {
            arr[i] = min;
        }
    }

    for (int i = 0; i < N; i++)
    {

        printf("%d ", arr[i]);
    }

    return 0;
}
