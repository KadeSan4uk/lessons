#include <stdio.h>
int main()
{
    int a, b, c, d, e, p;
    a = 30;
    b = 31;
    c = 29;
    p = 0;
    scanf("%d%d", &d, &e);
    if ((d <= 31 && e == 1) || (e == 3) || (e == 5) || (e == 7) || (e == 8) || (e == 10) || (e == 12))
    {
        p = b;
    }
    else if ((d <= 30 && (e == 4 || e == 6 || e == 9 || e == 11)))
    {
        p = a;
    }
    else if (d <= 29 && e == 2)
    {
        p = c;
    }
    else
    {
        printf("error\n");
        return 0;
    }
    printf("correct\n");
    return 0;
}
/*
#include <stdio.h>

int main() {
  // put your code here
  int d,m;
    scanf("%d %d", &d,&m);
    if (((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&d>1&&d<32)||((m==4||m==6||m==9||m==11)&&d>1&&d<31)||((m==2)&&d>1&&d<30))
        printf("correct");
    else
        printf("error");
  return 0;
}
*/