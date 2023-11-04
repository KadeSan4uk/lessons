#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// программа выдает случайное число между S u E, при этом гарантируеться что S  меньше E.
int lot_rand();
int main()
{
    lot_rand();
    return 0;
}
int lot_rand()
{
    int s, e;
    scanf("%d %d", &s, &e);

    srand(time(NULL));
    int res = rand() % (e - s + 1) + s;

    printf("%d", res);
    return 0;
}