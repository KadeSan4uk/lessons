#include <stdio.h>

int main()
{
    int N;
    if (scanf("%d", &N), N > 30000 || N < 0)
    {
        return 0;
    }

    int p = 1;
    int k = 0;
    while (p <= N)
    {
        if (k > 0)
        {
            printf("%d ", k);
        }

        p *= 2;
        k++;
    }

    printf("\n");

    return 0;
}
/*
#include <stdio.h>
int main(void) {
  int n, c = 0;
  scanf("%d", &n);
  while(n/=2) printf("%d ", ++c);
}
*/