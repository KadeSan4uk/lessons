#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int i = 0;
    if (a > 0)
    {
        i++;
    }

    if (b > 0)
    {
        i++;
    }
    if (c > 0)
    {
        i++;
    }

    printf("%d", i);

    return 0;
}
/*
#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("%d", (a > 0) + (b > 0) + (c > 0));
  return 0;
}
*/