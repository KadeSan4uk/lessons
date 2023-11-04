#include <stdio.h>
#include <stdlib.h>
#include <time.h> // чтобы использовать функцию time()

int main(void)
{
    srand(time(NULL));
    /* генерируем пять случайных целых чисел из отрезка [80;100] */
    printf("%d\n", 0 + rand() % 100);
    printf("%d\n", 10 + rand() % 100);
    printf("%d\n", 20 + rand() % 21);
    printf("%d\n", 30 + rand() % 50);
    printf("%d\n", 40 + rand() % 21);
}