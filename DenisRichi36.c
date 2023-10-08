#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INITIAL_BUFFER_SIZE 100

int my_getline(char **line);
void copy(char **to, char *from);

int main()
{
    char *line = NULL;
    char *longest = NULL;
    size_t max = 0;
    size_t len;

    while ((len = my_getline(&line)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(&longest, line);
        }
    }

    if (max > 0)
        printf("%s", longest);

    // Освобождаем выделенную память
    free(line);
    free(longest);

    return 0;
}

int my_getline(char **line)
{
    size_t buffer_size = INITIAL_BUFFER_SIZE;
    *line = (char *)malloc(buffer_size);
    if (*line == NULL)
    {
        perror("Ошибка выделения памяти");
        exit(EXIT_FAILURE);
    }

    int c;
    size_t len = 0;

    while ((c = getchar()) != EOF && c != '\n')
    {
        if (len >= buffer_size - 1)
        {
            buffer_size *= 2;
            *line = (char *)realloc(*line, buffer_size);
            if (*line == NULL)
            {
                perror("Ошибка выделения памяти");
                exit(EXIT_FAILURE);
            }
        }
        (*line)[len++] = (char)c;
    }

    (*line)[len] = '\0';

    if (c == EOF && len == 0)
    {
        free(*line);
        *line = NULL;
    }

    return len;
}

void copy(char **to, char *from)
{
    free(*to);
    *to = (char *)malloc(strlen(from) + 1);
    if (*to == NULL)
    {
        perror("Ошибка выделения памяти");
        exit(EXIT_FAILURE);
    }
    strcpy(*to, from);
}
