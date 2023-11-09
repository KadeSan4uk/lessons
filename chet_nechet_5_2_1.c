#include <stdio.h>
int main()
{
    int q;
    scanf("%d", &q);

    if (q % 2)
        printf("-1", q);
    else
        printf("1", q);

    return 0;
}
/*#include <stdio.h>

int main() {
    int x;

    scanf("%d", &x);

    printf("%d\n", x % 2 ? -1 : 1);

    return 0;
}*/