#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    b = 2;
    c = 350;
    if (a <= 500)
        printf("%d\n", c);
    else if (a > 500)
    {
        a = c + b * (a - 500);
        printf("%d", a);
    }
    return 0;
}
/*
#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d", &a);
  if ( a <= 500 ) b = 350;
  else b = (a - 500) * 2 + 350;
  printf("%d\n", b);
  return 0;
}
*/