#include <stdio.h>

int main()
{
    int n, m, k;
    scanf("%d", &n);
    m = n;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
    {
        for (int p = 0; p < k; p++)
        {
            int temp = arr[i][m - 1];
            for (int j = m - 1; j > 0; j--)
            {
                arr[i][j] = arr[i][j - 1];
            }
            arr[i][0] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*
#include <stdio.h>

int main() {
    int n, l;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d", &l);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][(l*n+j-l)%n]);
        }
        printf("\n");
    }
}
*/