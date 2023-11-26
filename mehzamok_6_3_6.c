#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a == 2 && b == 4 && c == 8)
        printf("open\n");
    else if (a == 2 && b == 8 && c == 4)
        printf("open\n");
    else if (a == 4 && b == 2 && c == 8)
        printf("open\n");
    else if (a == 4 && b == 8 && c == 2)
        printf("open\n");
    else if (a == 8 && b == 4 && c == 2)
        printf("open\n");
    else if (a == 8 && b == 2 && c == 4)
        printf("open\n");
    else
        printf("close\n");
    return 0;
}
/*
#include <stdio.h>

int main() {
int a, b, c;
scanf("%d %d %d", &a,&b,&c);
if (((a!=2) && (a!=4) && (a!=8)) || ((b!=2) && (b!=4) && (b!=8)) || ((c!=2) && (c!=4) && (c!=8)))
    printf("close");
else {
    if ((a!=b) && (b!=c) && (a!=c))
        printf("open");
    else
        printf("close");}
    return 0;
}
*/