#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, y;
    scanf("%lf %lf", &x, &y);
    int p;

    if (x > 0 && y > 0)
    {
        p = 1;
    }
    else if (x < 0 && y > 0)
    {
        p = 2;
    }
    else if (x > 0 && y < 0)
    {
        p = 4;
    }
    else if (x < 0 && y < 0)
    {
        p = 3;
    }

    switch (p)
    {
    case 1:
        printf("1");
        break;
    case 2:
        printf("2");
        break;
    case 3:
        printf("3");
        break;
    case 4:
        printf("4");
        break;
    default:
        printf("ERROR!");
        break;
    }

    return 0;
}
/*
#include <stdio.h>

int main() {

  double x, y;

  scanf("%lf %lf",&x,&y);

  if (x>0 && y>0) printf("1");
  if (x>0 && y<0) printf("4");
  if (x<0 && y>0) printf("2");
  if (x<0 && y<0) printf("3");


  return 0;
}
*/