#include <stdio.h>
int main()
{
    int x, y, p, i;
    scanf("%d %d", &x, &y);
    if (x == y)
        printf("1");
    else
        printf("0");
    return 0;
}
/*
#include <stdio.h>

int main(void) {

  int a,b; // a=b - 1 a!=b - 0
  scanf("%d",&a);
   scanf("%d",&b);

  printf("%d\n", !(a!=b) );


  return 0;
}
*/