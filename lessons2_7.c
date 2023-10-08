#include <stdio.h>
#include <string.h>
ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
int main()
{

    char message[] = "Hello, world!";

    int charCount = ft_strlen(message);

    printf("Number of characters: %d\n", charCount);

    return 0;
}