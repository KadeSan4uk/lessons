#include <stdio.h>

int main()
{
    int num;
    int max, min;

    if (scanf("%d", &num), num == 0)
    {
        return 0;
    }

    min = max = num;

    while (num != 0)
    {
        if (num < min)
        {
            min = num;
        }
        if (num > max)
        {
            max = num;
        }
        scanf("%d", &num);
    }
    printf("%d ", max);
    printf("%d\n", min);

    return 0;
}
/*
#include <stdio.h>

int main() {
    int n, min, max;
    scanf("%d", &n);
    max = min = n;
    do {
        if (n>max) max = n;
        if (n<min) min = n;
        scanf("%d", &n);
    }
    while(n);
    printf("%d %d", max, min);
}
*/