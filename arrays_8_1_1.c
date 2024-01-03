#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, p;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
/*
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); int a[n];
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    } for (int i = n; i >= 1; i--) {
        printf("%d ", a[i]);
    }
}
*/