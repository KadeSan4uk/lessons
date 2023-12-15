#include <stdio.h>

int main()
{
    int number;
    int sum = 0;
    int zeroCount = 0;

    while (1)
    {
        scanf("%d", &number);

        if (number == -9999)
        {
            break;
        }

        if (number == 0)
        {
            zeroCount++;

            if (zeroCount == 2)
            {
                break;
            }
        }

        if (zeroCount == 1)
        {
            sum += number;
        }
    }

    printf("%d\n", sum);

    return 0;
}
/*
#include <stdio.h>

int main() {
  int a, sum = 0;
  while (scanf("%d", &a) && a) { }
  while (scanf("%d", &a) && a) { sum += a; }
  printf("%d", sum);
}
*/