#include <stdio.h>
#include <string.h>

void reverseWord(char *word)
{
    int start = 0;
    int end = strlen(word) - 1;

    while (start < end)
    {
        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    char inputString[41];
    fgets(inputString, sizeof(inputString), stdin);

    int length = strlen(inputString);
    if (length > 0 && inputString[length - 1] == '\n')
    {
        inputString[length - 1] = '\0';
    }

    char *word = strtok(inputString, " ");
    while (word != NULL)
    {
        reverseWord(word);
        printf("%s ", word);
        word = strtok(NULL, " ");
    }

    return 0;
}
/*
#include <stdio.h>
#include <string.h>

int main() {
 char Arr[100]= {0};
    while (scanf("%s",&Arr)==1)
           {

              for(int i=strlen(Arr)-1 ;i>=0; i--)
                  printf("%c",Arr[i]);
                printf(" ");
           }

    return 0;
}
*/