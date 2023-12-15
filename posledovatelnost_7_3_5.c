#include <stdio.h>

int main()
{
    int N, flag, Lastvalue;
    flag = 0;

    scanf("%d", &N);
    Lastvalue = N;

    while (N != -9999)
    {
        scanf("%d", &N);

        if (N <= Lastvalue && N != -9999)
        {
            flag = -1;
        }
        Lastvalue = N;
    }
    printf("%s\n", flag == -1 ? "NO" : "YES");

    return 0;
}
