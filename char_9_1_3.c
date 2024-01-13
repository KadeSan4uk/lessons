#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &arr[i]);
    }
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", count);
    }
    return 0;
}