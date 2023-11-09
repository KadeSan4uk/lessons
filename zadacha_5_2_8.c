#include <stdio.h>
int main()
{
    int k, res, i, p, o;
    scanf("%d", &k);
    i = 60;
    res = k / i / i;
    p = res * i * i;
    o = k - p;

    printf("%d", o);
    return 0;
}
/*#include <stdio.h>

int main() {
  int k;
  scanf("%d",&k);
  printf("%d",k % 3600);
  return 0;
}*/