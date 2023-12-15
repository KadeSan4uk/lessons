#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));

    printf("###########  Devil\'s bones   ###########\n");
    printf("#                                      #\n");
    printf("#   Commands:                          #\n");
    printf("#                                      #\n");
    printf("#   1 - new game                       #\n");
    printf("#   0 - exit                           #\n");
    printf("#                                      #\n");
    printf("########################################\n\n");

    int ch_control;
    int value = 0, score = 0;

    do
    {
        printf("Input command: ");
        scanf("%d", &ch_control);

        switch (ch_control)
        {
        case 0:
            score = score - 1;
            break;
        case 1:
            value = 1 + rand() % 6;
            printf("Result: %d\n", value);
            break;
        default:
            printf("Error! Try again...\n");
            continue; // прерываем текущую итерацию цикла
        }

        score = score + 1;

        if (score == 50)
        {
            printf("Game over!\n");
            break; // завершаем цикл
        }
    } while (ch_control != 0);

    printf("\n\nSCORE: %d\n\nGood bye!\n", score);
    return 0;
}