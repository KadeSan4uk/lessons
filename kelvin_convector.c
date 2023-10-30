#include <stdio.h>

int kelvin_to_celcius()
{
    int celcius;
    int kalvin;
    int value = 215;

    printf("Vvedite kalvin\n");
    scanf("%d", &kalvin);
    celcius = kalvin + value;
    printf("Kalvin %d = %d Celcius\n", kalvin, celcius);
}

int main()
{
    kelvin_to_celcius();
    return 0;
}
