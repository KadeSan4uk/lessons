#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, p, o;
    scanf("%d", &N);
    int arr[N];
    int i = 0;
    for (i = 0; i < N; i++)
    {

        scanf("%d", &arr[i]);
    }
    p = 1;
    o = N - 2;
    if (arr[p] == arr[o] && arr[0] == arr[N - 1])
    {
        printf("YES\n");
    }
    else
        printf("NO\n");

    return 0;
}