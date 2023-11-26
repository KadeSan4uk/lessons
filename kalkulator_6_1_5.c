#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c;

    double o, i;
    scanf("%lf %lf %s", &o, &i, &c);

    switch (c)
    {
    case '+':
        printf("%.2lf", o + i);
        break;
    case '-':
        printf("%.2lf", o - i);
        break;
    case '*':
        printf("%.2lf", o * i);
        break;
    case '/':
        if (i != 0)

            printf("%.2lf", o / i);
        else
            printf("ERROR!");

        break;
    default:
        printf("ERROR!");
        break;
    }

    return 0;
}