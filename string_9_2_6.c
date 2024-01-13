#include <stdio.h>
#include <string.h>

int main()
{
    char arr[15] = {0};
    char arr1[15] = {0};

    fgets(arr, 15, stdin);
    arr[strcspn(arr, "\n")] = '\0';

    fgets(arr1, 15, stdin);
    arr1[strcspn(arr1, "\n")] = '\0';

    if (strlen(arr) != strlen(arr1))
    {
        return 1;
    }

    int count = 0;
    for (int i = 0; i < strlen(arr); ++i)
    {
        if (arr[i] != arr1[i])
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
/*
#include <stdio.h>

int main() {

   char str[20]; char str1[20]; int i=0,s=0;
   fgets(str,20,stdin);
   fgets(str1,20,stdin);

   while( str[i] != '\0' && str1[i] != '\0')
   {
       if (str[i] != str1[i]) s++;
       i++;
   }

    printf("%d",s);
}
*/