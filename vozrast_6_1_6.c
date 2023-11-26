#include <stdio.h>
int main(void)
{
    char pol;
    int age, height, weight;
    double bov_m, bov_f;

    scanf("%s %d %d %d", &pol, &age, &height, &weight);
    if (pol != 'm' && pol != 'f')
    {

        printf("ERROR!\n");
        return 0;
    }

    bov_m = 10 * weight + 6.25 * height - 5 * age + 5;
    bov_f = 10 * weight + 6.25 * height - 5 * age - 161;

    if (pol == 'm')
    {
        printf("|  BMR  |\n");

        printf("|%7.2f|\n", bov_m);
    }
    else if (pol == 'f')
    {
        printf("|  BMR  |\n");

        printf("|%7.2f|\n", bov_f);
    }

    return 0;
}
/*
#include <stdio.h>
int main(void){
    int a, h, w; char c;
    scanf("%c %d %d %d", &c, &a, &h, &w);
    switch(c) {
        case 'm' : printf("|  BMR  |\n|%7.2lf|", 10*w+6.25*h-5*a+5); break;
        case 'f' : printf("|  BMR  |\n|%7.2lf|", 10*w+6.25*h-5*a-161); break;
        default : printf("ERROR!");
    }
}
*/