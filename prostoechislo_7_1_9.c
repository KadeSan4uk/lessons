#include <stdio.h>

int main()
{
    int N, p = 0;
    scanf("%d", &N);

    for (int i = 2; i < N; i++)
    {
        if (N % i == 0)
        {
            p = 1;
            break;
        }
    }

    if (N == 1 || p == 1)
    {
        printf("0\n");
    }
    else
    {
        printf("1\n");
    }

    return 0;
}
/*
#include <stdio.h>

int main() {
 int n, counter = 0;
 scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            counter++;
        }
    }
    printf("%d", counter == 2);
}
*/