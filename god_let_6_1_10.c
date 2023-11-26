#include <stdio.h>

int main()
{

    int age;
    scanf("%d", &age);

    char *ending;
    int lastDigit = age % 10;
    int lastTwoDigits = age % 100;

    switch (lastDigit)
    {
    case 1:
        ending = "год";
        break;
    case 2:
    case 3:
    case 4:
        ending = "года";
        break;
    default:
        ending = "лет";
        break;
    }

    if (lastTwoDigits >= 11 && lastTwoDigits <= 14)
    {
        ending = "лет";
    }

    printf("Мне %d %s\n", age, ending);

    return 0;
}
/*
#include <stdio.h>

int main() {
  int k;
  scanf("%d", &k);

  switch(k)
  {
      case 11:
      case 12:
      case 13:
      case 14: printf("Мне %d лет", k); break;
      default:
          switch(k % 10)
          {
              case 1: printf("Мне %d год", k); break;
              case 2:
              case 3:
              case 4: printf("Мне %d года", k); break;
              default: printf("Мне %d лет", k); break;
          }
  }
  return 0;
}
*/