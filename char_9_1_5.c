#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if (c >= 48 && c <= 57)
    {
        printf("digit\n");
    }
    else if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
    {
        printf("en\n");
    }
    else
    {
        printf("error\n");
    }
    return 0;
}
/*
#include <stdio.h>

int main() {
  char ch = getchar();
  if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') printf("en");
  else if (ch >= '0' && ch <= '9') printf("digit");
  else printf("error");
  return 0;
}
*/