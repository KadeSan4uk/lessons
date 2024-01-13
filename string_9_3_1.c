#include <stdio.h>
#include <string.h>
int main()
{
    char arr[99] = "Hello, ";
    char str[99] = {0};
    fgets(str, sizeof(str), stdin);
    int length = strlen(str);
    if (length > 0 && str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
    }
    strcat(arr, str);
    printf("%s", arr);
    return 0;
}
/*
#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[40] = "Hello, ";
    char str2[20];
    scanf("%s", str2);
    printf("%s", strcat(str1, str2));
    return 0;
}
*/