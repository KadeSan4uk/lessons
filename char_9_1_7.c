#include <stdio.h>
int main()
{
    int c = 26;
    char arr[c];
    for (int i = 0; i < c; i++)
    {
        arr[i] = 'A' + i;
    }
    int n;
    scanf("%d", &n);
    for (int i = c - n; i < c; i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}
/*
#include <stdio.h>

int main() {
  unsigned k;
  scanf("%u",&k);
  printf("ABCDEFGHIJKLMNOPQRSTUVWXYZ" + 26 - k);
  return 0;
}
*/