#include <stdio.h>
#include <string.h>

int main()
{
    char arr[99];
    char str[99];

    fgets(arr, sizeof(arr), stdin);
    arr[strcspn(arr, "\n")] = '\0';

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("%s.%s\n", arr, str);

    return 0;
}
/*
#include <stdio.h>

int main() {
  char str1[25], str2[25];
  scanf("%s",str1);
  scanf("%s",str2);
  puts(strcat(strcat(str1,"."),str2));
  return 0;
}
*/