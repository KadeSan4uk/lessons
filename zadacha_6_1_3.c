#include <stdio.h>
int main()
{
    int i, p, o;
    scanf("%d", &i);
    if (i % 2 == 0)
        printf("Не любит");

    else
        printf("Любит");
    return 0;
}
/*
#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, " ");

  int num = 0;
  scanf("%d",&num);

  switch (num%2) {

        case 1 : printf("Любит"); break;
        case 0 : printf("Не любит"); break;

  }
  return 0;
}
*/