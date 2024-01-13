#include <stdio.h>

int main()
{
    int k;
    scanf("%d", &k);

    char upper = 'A' + k - 1;
    char lower = 'a' + k - 1;

    printf("%c%c\n", upper, lower);

    return 0;
}
/*
#include <stdio.h>

int main() {
  int a;
    scanf("%d", &a);
    printf("%c%c", a + 64, a + 96);
  return 0;
}
*/