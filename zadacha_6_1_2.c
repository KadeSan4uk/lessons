#include <stdio.h>
int main()
{
    char k;
    scanf("%s", &k);
    switch (k)
    {
    case '1':
        printf("плохо");
        break;
    case '2':
        printf("неудовлетворительно");
        break;
    case '3':
        printf("удовлетворительно");
        break;
    case '4':
        printf("хорошо");
        break;
    case '5':
        printf("отлично");
        break;

    default:
        break;
    }

    return 0;
}
/*
#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "RU");
    char *rtn[] = {"плохо", "неудовлетворительно", "удовлетворительно", "хорошо", "отлично"};
    int k;
    scanf("%d", &k);
    printf("%s", rtn[k - 1]);
    return 0;
}
*/