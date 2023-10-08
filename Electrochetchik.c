#include <stdio.h>

int main()
{
    int start_reading, end_reading;
    double tariff;

    // Ввод показаний счетчика и тарифа
    printf("Введите начальные показания счетчика (кВт*ч): ");
    scanf("%d", &start_reading);
    printf("Введите конечные показания счетчика (кВт*ч): ");
    scanf("%d", &end_reading);
    printf("Введите стоимость одного кВт*ч (рубли): ");
    scanf("%lf", &tariff);

    // Проверка на корректность ввода
    if (start_reading > end_reading || start_reading < 0 || tariff < 0)
    {
        printf("Ошибка ввода. Пожалуйста, убедитесь, что начальные показания меньше конечных и введены корректные значения.\n");
        return 1; // Возвращаем ненулевой код ошибки
    }

    // Вычисление потребленной электроэнергии
    int consumed_energy = end_reading - start_reading;

    // Вычисление стоимости потребленной электроэнергии
    double total_cost = consumed_energy * tariff;

    // Вывод результата с двумя знаками после запятой
    printf("Размер оплаты за электроэнергию: %.2lf рублей\n", total_cost);

    return 0;
}
