#include <stdio.h>
#include <string.h>
#include <math.h>

int binaryToDecimal(char binary[])
{
    int decimal = 0;
    int len = strlen(binary);

    for (int i = len - 1; i >= 0; i--)
    {
        if (binary[i] == '1')
        {
            decimal += pow(2, len - 1 - i);
        }
    }

    return decimal;
}

int main()
{
    char binary[21];

    scanf("%s", binary);

    int decimal = binaryToDecimal(binary);
    printf("%d\n", decimal);

    return 0;
}
