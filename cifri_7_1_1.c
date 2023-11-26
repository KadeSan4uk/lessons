#include <stdio.h>
int main()
{
    int a;
    if (scanf("%d", &a) != 1 && a >= 9 && a <= 0)
    {

        return 1;
    }

    for (int i = 1; i <= a; i++)

    {

        printf("%d ", i);
    }

    return 0;
}
/*
#include <stdio.h>

int main() {
    int n,k;
    scanf("%d", &n);
    for (k=1; k<=n; k=k+1){
        printf("%d ", k);
    }
    return 0;
}
*/