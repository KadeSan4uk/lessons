#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isInteger(const char *str)
{
    int i = 0;
    if (str[0] == '-')
    {
        i = 1;
    }
    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9')
        {
            return 0;
        }
        i++;
    }

    return 1;
}
int isFloat(const char *str)
{
    int i = 0;
    int dotCount = 0;
    int digitCount = 0;

    if (str[0] == '-')
    {
        i = 1;
    }

    while (str[i] != '\0')
    {
        if (str[i] == '.')
        {
            dotCount++;
            if (dotCount > 1 || digitCount == 0 || str[i + 1] == '\0')
            {
                return 0;
            }
        }
        else if (str[i] < '0' || str[i] > '9')
        {
            return 0;
        }
        else
        {
            digitCount++;
        }
        i++;
    }

    return (dotCount == 1 && digitCount > 0);
}

int main()
{
    char str[20];
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);
    if (length > 0 && str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
    }

    if (isInteger(str))
    {

        int intValue = atoi(str);
        printf("int\n", intValue);
    }
    else if (isFloat(str))
    {

        float floatValue = atof(str);
        printf("float\n", floatValue);
    }
    else
    {
        printf("error\n");
    }

    return 0;
}
