#include <stdio.h>
#include <ctype.h>

int main()
{
    int n;
    scanf("%d", &n);

    char c;
    int arr[26] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &c);

        if (islower(c))
        {
            c = toupper(c);
        }

        if (isalpha(c))
        {
            arr[c - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
