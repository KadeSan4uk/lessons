#include <stdio.h>

int main()
{
    long int K;
    scanf("%ld", &K);

    long int binary_gigabyte = 1024 * 1024 * 1024;  // 1 гигабайт в бинарном формате
    long int decimal_gigabyte = 1000 * 1000 * 1000; // 1 гигабайт в десятичном формате

    long int byte_difference = -K * decimal_gigabyte - -K * binary_gigabyte;
    // не понимаю почему К работает только с минусом.

    printf("%ld\n", byte_difference);

    return 0;
}
/*#include <stdio.h>
#include <math.h>

int main() {
  int k;
  scanf("%d", &k);
  printf("%ld", (int)(pow(2, 30)-pow(10, 9)) * k);
  return 0;
}*/