#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int matrix[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d", matrix[i][j]);
            if (j < M - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
