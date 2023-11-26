#include <stdio.h>
#include <stdlib.h>
int main()
{
    int d, m;
    scanf("%d %d", &m, &d);

    switch (m)
    {
    case 1:
        printf("%d", 0 + d);
        break;
    case 2:
        printf("%d", 31 + d);
        break;
    case 3:
        printf("%d", 59 + d);
        break;
    case 4:
        printf("%d", 90 + d);
        break;
    case 5:
        printf("%d", 120 + d);
        break;
    case 6:
        printf("%d", 151 + d);
        break;
    case 7:
        printf("%d", 181 + d);
        break;
    case 8:
        printf("%d", 212 + d);
        break;
    case 9:
        printf("%d", 243 + d);
        break;
    case 10:
        printf("%d", 273 + d);
        break;
    case 11:
        printf("%d", 304 + d);
        break;
    case 12:
        printf("%d", 334 + d);
        break;
    default:
        break;
    }

    return 0;
}
/*
#include <stdio.h>

int main() {
    int m, d, n=0;
    scanf("%d %d", &m, &d);
    switch(m-1){
        case 11: n+=30;
        case 10: n+=31;
        case 9:  n+=30;
        case 8:  n+=31;
        case 7:  n+=31;
        case 6:  n+=30;
        case 5:  n+=31;
        case 4:  n+=30;
        case 3:  n+=31;
        case 2:  n+=28;
        case 1:  n+=31;
    }
    n+=d;
    printf("%d", n);
    return 0;
}
*/