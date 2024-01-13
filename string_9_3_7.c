#include <stdio.h>
#include <string.h>

int main()
{
    char str1[51], str2[51];

    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int frequency[26] = {0};

    for (int i = 0; i < strlen(str1); i++)
    {
        if (str1[i] >= 'a' && str1[i] <= 'z')
        {
            frequency[str1[i] - 'a']++;
        }
    }

    int canCompose = 1;
    for (int i = 0; i < strlen(str2); i++)
    {
        if (str2[i] >= 'a' && str2[i] <= 'z')
        {
            if (frequency[str2[i] - 'a'] == 0)
            {
                canCompose = 0;
                break;
            }
            frequency[str2[i] - 'a']--;
        }
    }

    if (canCompose)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}
