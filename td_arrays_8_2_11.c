#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    int count = 1;
    int rowstart = 0, colstart = 0;
    int rowend = n - 1, colend = m - 1;

    while (rowstart <= rowend && colstart <= colend)
    {
        for (int i = colstart; i <= colend; i++)
        {
            arr[rowstart][i] = count++;
        }
        rowstart++;

        for (int i = rowstart; i <= rowend; i++)
        {
            arr[i][colend] = count++;
        }
        colend--;

        if (rowstart <= rowend)
        {
            for (int i = colend; i >= colstart; i--)
            {
                arr[rowend][i] = count++;
            }
            rowend--;
        }

        if (colstart <= colend)
        {
            for (int i = rowend; i >= rowstart; i--)
            {
                arr[i][colstart] = count++;
            }
            colstart++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
