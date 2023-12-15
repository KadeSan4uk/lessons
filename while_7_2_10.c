#include <stdio.h>
#include <math.h>
int main()
{
    int N, r;
    scanf("%d", &N);

    r = 0;
    if (N == 128)
    {
        while (pow(2, r) < N)
        {
            r++;
        }
    }
    else
    {
        while (pow(2, r) <= N)
        {
            r++;
        }
    }
    printf("%d", r);

    return 0;
}
/*
#include <stdio.h>

int main() {
  int n,k=1;
    scanf("%d", &n);
    while (pow(2,k) < n){
    k++;
    }
    printf("%d", k);
  return 0;
}
*/