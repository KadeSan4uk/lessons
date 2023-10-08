#include <stdio.h>
#include <string.h>

char *ft_strrev(char *str)
{
    int lenght = strlen(str);
    for (int i = 0, j = lenght - 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return str;
}
int main()
{
    char input[] = "Hello World!";
    char *strev = ft_strrev(input);
    printf("Reversed string:%s\n", strev);
    return 0;
}