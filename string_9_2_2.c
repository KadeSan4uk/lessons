#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    char arr[100];
    fgets(arr, sizeof(arr), stdin);

    int count = 0;
    bool inWord = false;

    for (int i = 0; arr[i] != '\0'; i++)
    {
        char char_check = arr[i];

        if ((isalpha(char_check) || isdigit(char_check)) && char_check != '\0' && char_check != '\n')
        {
            if (!inWord)
            {
                count++;
                inWord = true;
            }
        }
        else
        {
            inWord = false;
        }
    }

    printf("%d\n", count);

    return 0;
}
