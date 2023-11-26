#include <stdio.h>

int main()
{
    int A, B;

    if (scanf("%d %d", &A, &B) != 2 || A >= B)
    {
        return 1;
    }

    for (int i = B; i >= A; i--)
    {
        printf("%d ", i);
    }

    return 0;
}
/*
#include <stdio.h>

int main() {
  int k, m;
  scanf("%d %d", &k, &m);
  for (int i = m; i >= k; i--) {
      printf("%d ", i);
  }
}
*/