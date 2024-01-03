#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int x = 1, p = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        p *= arr[i][n - 1 - i];
        x *= arr[i][i];
    }

    printf("%d %d", p >= x ? p : x, p < x ? p : x);

    return 0;
}