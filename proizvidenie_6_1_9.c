#include <stdio.h>

int main()
{

    int k, num;
    scanf("%d %d", &k, &num);

    int product = 1;

    while (num > 0)
    {
        int digit = num % 10;

        switch (k)
        {
        case 1:
            product *= digit;
            break;
        case 2:
            product *= digit;
            break;
        case 3:
            product *= digit;
            break;
        case 4:
            product *= digit;
            break;
        default:
            printf("ERROR!");
            return 1;
        }

        num /= 10;
    }

    printf("%d\n", product);

    return 0;
}
/*
#include <stdio.h>

int main() {
    int k, x, y = 1;
    scanf("%d %d", &k, &x);
    switch (k)
    {
        case 4:
            y *= x / 1000;
        case 3:
            y *= x % 1000 / 100;
        case 2:
            y *= x % 100 / 10;
        case 1:
            y *= x % 10;
    }
    printf("%d\n", y);
    return 0;
}
*/