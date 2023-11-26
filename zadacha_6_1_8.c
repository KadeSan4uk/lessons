#include <stdio.h>

int main()
{
    // Ввод данных
    int k, num;
    scanf("%d %d", &k, &num);

    // Инициализация переменной для хранения произведения цифр
    int product = 1;

    // Вычисление произведения цифр
    while (num > 0)
    {
        int digit = num % 10;

        // Используем оператор switch для умножения на текущую цифру
        switch (k)
        {
        case 1:
            product *= digit;
            break;
        case 2:
            product *= digit;
            break;
        case 3:
            product *= digit;
            break;
        case 4:
            product *= digit;
            break;
        default:
            printf("Некорректное количество цифр\n");
            return 1;
        }

        num /= 10;
    }

    // Вывод результата
    printf("%d\n", product);

    return 0;
}
