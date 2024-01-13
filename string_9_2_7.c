#include <stdio.h>
#include <string.h>

int main()
{
    int n, x = 0, y = 0;
    char direction[10];
    int steps;

    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%s %d", direction, &steps);

        if (strcmp(direction, "North") == 0)
        {
            y += steps;
        }
        else if (strcmp(direction, "South") == 0)
        {
            y -= steps;
        }
        else if (strcmp(direction, "East") == 0)
        {
            x += steps;
        }
        else if (strcmp(direction, "West") == 0)
        {
            x -= steps;
        }
    }
    printf("%d %d\n", x, y);

    return 0;
}
