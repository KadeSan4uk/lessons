#include <stdio.h>
#include <limits.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int min = INT_MAX, max = 0;
    int minSumColumn = 0, maxSumColumn = 1;
    for (int j = 0; j < m; j++)
    {
        int columnSum = 0;

        for (int i = 0; i < n; i++)
        {
            columnSum += arr[i][j];
        }

        if (columnSum < min)
        {
            min = columnSum;
            minSumColumn = j;
        }

        if (columnSum > max)
        {
            max = columnSum;
            maxSumColumn = j;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i][minSumColumn];
        arr[i][minSumColumn] = arr[i][maxSumColumn];
        arr[i][maxSumColumn] = temp;
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
