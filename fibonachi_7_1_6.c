#include <stdio.h>
int main()
{
    int f1, f2, tmp;
    long long N;
    if (scanf("%d", &N), N < 0 || N > 45)
    {
        return 0;
    }
    f1 = 0;
    f2 = 1;

    for (int i = 0; i <= N; i++)
    {
        tmp = f1;
        f1 = f2;
        f2 = f2 + tmp;
    }
    printf("%d", tmp);
    return 0;
}
/*
#include <stdio.h>

int main() {
    int f1=1, f2=1, m;
    scanf("%d", &m);
    for (int n=1; n<=m; n++)
    {
        f2=f1+f2;
        f1=f2-f1;
    }
    printf("%d\n", f2-f1);
    return 0;
}
*/