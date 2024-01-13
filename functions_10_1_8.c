#include <stdio.h>

void print_date(int d, int m, int y, int k)
{
    if (k == 0)
    {
        printf("%02d.%02d.%02d\n", d, m, y % 100);
    }
    else if (k == 1)
    {
        printf("%02d.%02d.%04d\n", d, m, y);
    }
    else if (k == 2)
    {
        printf("%04d/%02d/%02d\n", y, m, d);
    }
    else
    {
        printf("error\n");
    }
}

int main(void)
{
    int day, month, year, format;

    scanf("%d", &day);

    scanf("%d", &month);

    scanf("%d", &year);

    scanf("%d", &format);

    print_date(day, month, year, format);

    return 0;
}
