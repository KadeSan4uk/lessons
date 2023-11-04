#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// программа выдает случайное число от 0 до N включительно.
int lot_rand();
int main()
{
    lot_rand();
    return 0;
}
int lot_rand()
{
    int N;
    scanf("%d", &N);

    srand(time(NULL));
    int res = rand() % (N + 1);

    printf("%d", res);
    return 0;
}