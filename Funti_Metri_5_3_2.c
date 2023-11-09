#include <stdio.h>

int main()
{
    double res, mm, md;
    char s = '"';
    int f, d;
    scanf("%d %d", &f, &d);

    mm = 25.4;
    md = 12;

    res = ((f * md + d) * mm) / 1000;
    printf("%d'%d%c = %.2lfm.\n", f, d, s, res);

    return 0;
}
/*
#include <stdio.h>

int main() {
  double F, D, res;
  scanf("%lf%lf", &F, &D);
  res=(F*12*25.4+D*25.4)/1000;
  printf("%.0f\'%.0f\" = %.2f%c.", F, D, res, 'm');
  return 0;
}
*/