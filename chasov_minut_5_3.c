#include <stdio.h>

int main()
{
    int k;
    scanf("%d", &k);

    int seconds_in_an_hour = 3600;
    int remaining_seconds = k % seconds_in_an_hour;
    int minutes = remaining_seconds / 60;
    int hours = k / seconds_in_an_hour;

    printf("%d %d\n", hours, minutes);

    return 0;
}
