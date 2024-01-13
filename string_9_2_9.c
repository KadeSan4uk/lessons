#include <stdio.h>

int main()
{
    long long k;

    scanf("%lld", &k);

    char str[20];
    sprintf(str, "%lld", k);

    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    for (int i = 0; i < length; ++i)
    {
        printf("%c", str[i]);
        if ((length - i - 1) % 3 == 0 && i != length - 1)
        {
            printf(" ");
        }
    }

    return 0;
}
/*
#include <stdio.h>

int main() {
    char s[100];
    fgets(s, 100, stdin);
    int i = 0;
    while (s[i] != '\0' && s[i] != '\n') {
        i++;
    }
    for (int j = 0; j < i; j++) {
        printf("%c", s[j]);
        printf((i-j-1)%3 == 0 ? " " : "");
    }
}
*/
