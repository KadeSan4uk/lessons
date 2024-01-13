#include <stdio.h>
#include <string.h>

int isPalindromeWord(const char *word)
{
    int length = strlen(word);

    return (length > 0 && word[0] == word[length - 1]);
}

int main()
{
    char inputString[51];
    fgets(inputString, sizeof(inputString), stdin);

    int length = strlen(inputString);
    if (length > 0 && inputString[length - 1] == '\n')
    {
        inputString[length - 1] = '\0';
    }

    char *word = strtok(inputString, " ");
    while (word != NULL)
    {
        if (isPalindromeWord(word))
        {
            printf("%s ", word);
        }
        word = strtok(NULL, " ");
    }

    return 0;
}
/*
#include <stdio.h>

int main(void) {
  char word[50], c;

  while (2 == scanf("%s%c", word, &c)) {
    if (word[0] == word[strlen(word) - 1])
      printf("%s ", word);
    if (c == 10) break;
  }
}
*/