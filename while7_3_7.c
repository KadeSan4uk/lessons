#include <stdio.h>

int main()
{
    int number;
    int secretCodeFound = 0;

    while (1)
    {
        scanf("%d", &number);

        if (number == -9999)
        {
            break;
        }

        if (secretCodeFound && number >= 1000 && number <= 9999)
        {
            printf("%d ", number);
        }

        if (number == 2517)
        {
            secretCodeFound = 1;
        }
    }

    return 0;
}
/*
#include <stdio.h>

int main() {
  int d;
  while (scanf("%d", &d) && d != 2517);
  while (scanf("%d", &d) && d != -9999)
      printf("%d ", d);
}
*/
