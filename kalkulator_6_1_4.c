#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c;

    double o, i;
    scanf("%s %lf %lf", &c, &o, &i);

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
        printf("%.2lf", o / i);
        break;
    default:
        printf("ERROR!");
        break;
    }

    return 0;
}