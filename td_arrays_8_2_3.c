#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d", &N);
    M = N;

    int arr[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (i % 2 != 0)
            {
                arr[i][j] = M - j;
            }
            else
            {
                arr[i][j] = j + 1;
            }
            printf("%d", arr[i][j]);
            if (j < M - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
/*
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i % 2 == 0) {
                    arr[i][j] = j + 1;
                    printf("%d ", arr[i][j]);
                } else {
                    arr[i][j] = n - j;
                    printf("%d ", arr[i][j]);
                }
        } printf("\n");
    }
    return 0;
}
*/