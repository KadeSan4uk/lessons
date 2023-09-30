#include <stdio.h>

int main()
{
    int i;
    int y;
    int j;

    for (i = 0; i < 10; i++)
        for (y = 0; y < 10; y++)
            for (j = 0; j < 10; j++)
                if (i != y && i != j && y != j)
                    printf("%d%d%d\n", i, y, j);

    return 0;
}