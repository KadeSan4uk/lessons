#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int res = m / n;
    int ml = res % 10;
    double drob = (m * 1.0) / n - res;
    int str = (int)(drob * 10);
    printf("%d %d", ml, str);

    return 0;
}
/*#include <stdio.h> лучшее решение)

int main(){
    int M,N;
    scanf("%d%d",&M, &N);
    printf("%d %d",M/N%10, M*10/N%10);
}*/