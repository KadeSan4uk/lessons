#include <stdio.h>

int main()
{
    char arr[100] = {0};
    char k;
    scanf(" %c", &k);
    getchar();

    fgets(arr, sizeof(arr), stdin);

    int p = -1;

    for (int i = 0; arr[i] != '\0' && arr[i] != '\n'; i++)
    {
        if (arr[i] == k)
        {
            p = i;
            break;
        }
    }

    printf("%d\n", p);
    return 0;
}
/*
#include <stdio.h>
int main(void) {
  int i=0;
  char str[100], d;
  scanf("%c\n",&d);
  fgets(str, 100, stdin);

  while(str[i] != d){
    i++;
    if(str[i] == '\0'){
      i=-1;
    }
  }
  printf("%d",i);

  return 0;
}
*/