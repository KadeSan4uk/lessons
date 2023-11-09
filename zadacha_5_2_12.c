#include <stdio.h>

int main()
{
    int k;
    scanf("%d", &k);

    // Номер дня недели: 0 - воскресенье, 1 - понедельник, ..., 6 - суббота
    int den = (k + 2) % 7;

    printf("%d\n", den);

    return 0;
}
/*
#include <stdio.h>

int main() {
  int k;
  scanf("%d", &k);
  printf("%d", k%7);
}
*/