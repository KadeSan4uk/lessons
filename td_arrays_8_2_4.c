#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((arr[i][j] = (i - j) % n + 1) > 0)
                printf("%d ", arr[i][j]);
            else if ((arr[j][i] = (j - i) % n + 1) > 0)
            {
                printf("%d ", arr[j][i]);
            }
        }
        printf("\n");
    }

    return 0;
}
