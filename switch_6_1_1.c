#include <stdio.h>

int main()
{

    char s;
    scanf("%c", &s);

    switch (s)
    {

    case 'l':
        printf("коня потеряешь, себя спасёшь!\n");
        break;
    case 'f':
        printf("и себя и коня потеряешь!\n");
        break;
    case 'r':
        printf("себя потеряешь, коня спасёшь!\n");
        break;
    default:

        break;
    }

    return 0;
}