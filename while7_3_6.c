#include <stdio.h>
int main()
{
    int N, Lastvalue, count, flag;
    count = 2;
    flag = 0;

    scanf("%d", &N);
    Lastvalue = N;

    while (N != -9999)
    {
        scanf("%d", &N);

        if (N >= Lastvalue && N != -9999)
        {
            count++;
            Lastvalue = N;
        }
        else if (N < Lastvalue && N != -9999)
        {
            flag = count;
            break;
        }
    }

    printf("%d", flag);
    return 0;
}
/*
#include <stdio.h>

int main() {
   int a, b, count=0;
   scanf("%d", &a);
   while(a != -9999){
       scanf("%d", &b);
       if(a>=b && b != -9999){
         printf("%d", count+2);
         return 0;
       }
       count++;
       a=b;
   }
  printf("%d", 0);
  return 0;
}
*/