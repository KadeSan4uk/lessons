#include <stdio.h>
void ft_put_str(char *str)
{
    printf("%s", str);
}
int main()
{
    char word[] = "Sanya";
    ft_put_str(word);
    return 0;
}