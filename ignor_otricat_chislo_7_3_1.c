#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    while (N != 0)
    {
        if (N < 0)
        {

            scanf("%d", &N);
            continue;
        }

        printf("%d ", N);
        scanf("%d", &N);
    }

    return 0;
}
/*
#include <stdio.h>

int main() {
    int a;
    while (1) {
        scanf("%d", &a);
        if (a < 0) continue;
        if (a == 0) break;
        printf("%d ", a);
    }
}
*/