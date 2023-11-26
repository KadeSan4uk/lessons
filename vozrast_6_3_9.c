#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a <= 6)
        printf("дошкольник\n");
    if (a >= 7 && a <= 18)
        printf("школьник\n");
    if (a >= 19 && a <= 59)
        printf("рабочий\n");
    if (a >= 60)
        printf("пенсионер\n");
    return 0;
}