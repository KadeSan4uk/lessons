#include <stdio.h>
int main()
{
    int a;
    a = 0;
    for (int i = 0; i < 100; i++)
    {
        a++;
        if (a % 3 == 0 && a % 5 == 0)
        {
            printf("FizzBuzz ");
        }
        else if (a % 3 == 0)
        {
            printf("Fizz ");
        }
        else if (a % 5 == 0)
        {
            printf("Buzz ");
        }
        else
            printf("%d ", a);
    }

    return 0;
}