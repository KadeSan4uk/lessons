#include <stdio.h>
int main()
{
    int count, lastValue, x = 0;
    scanf("%d", &count);
    for (size_t i = 0; i < count; i++)
    {
        int value;
        scanf("%d", &value);
        if (value != lastValue)
        {
            printf(" %d", value);
            lastValue = value;
        }
    }

    return 0;
}