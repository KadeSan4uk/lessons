#include <stdio.h>

int main()
{
    char ticketNumber[7];

    fgets(ticketNumber, sizeof(ticketNumber), stdin);
    ticketNumber[6] = '\0';

    int sumFirstHalf = (ticketNumber[0] - '0') + (ticketNumber[1] - '0') + (ticketNumber[2] - '0');
    int sumSecondHalf = (ticketNumber[3] - '0') + (ticketNumber[4] - '0') + (ticketNumber[5] - '0');

    if (sumFirstHalf == sumSecondHalf)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}
