#include <stdio.h>
int main()
{
    int m, i, p;
    scanf("%d %d %d", &m, &i, &p);
    printf("%d", (i + p) % m);
    return 0;
}
/*
#include <stdio.h>
 сдвиг в любую сторону(выше решение сдвиг только по часовой)
int main() {
  int n, k, x;
    scanf("%d %d %d", &n, &k, &x);
    printf("%d\n", (n+k%n+x)%n);// put your code here
  return 0;
}
*/