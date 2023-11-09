#include <stdio.h>

int main()
{
       int x1, x2, x3, x4, x5;
       int ne_chet = 0; // Количество нечетных чисел
       int chet = 0;    // Количество четных чисел

       scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);

       if (x1 % 2 == 0)
       {
              chet++;
       }
       else
       {
              ne_chet++;
       }

       if (x2 % 2 == 0)
       {
              chet++;
       }
       else
       {
              ne_chet++;
       }

       if (x3 % 2 == 0)
       {
              chet++;
       }
       else
       {
              ne_chet++;
       }

       if (x4 % 2 == 0)
       {
              chet++;
       }
       else
       {
              ne_chet++;
       }

       if (x5 % 2 == 0)
       {
              chet++;
       }
       else
       {
              ne_chet++;
       }

       int raznica = ne_chet - chet; // Разность между нечетными и четными числами

       printf("%d\n", raznica);

       return 0;
}
/*#include <stdio.h>
#include <math.h>

int main() {
  int x1,x2,x3,x4,x5;
  scanf("%i%i%i%i%i",&x1,&x2,&x3,&x4,&x5);
  printf("%i",(abs(x1)%2+abs(x2)%2+abs(x3)%2+abs(x4)%2+abs(x5)%2)*2-5);
  return 0;
}*/