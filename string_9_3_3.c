#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char city1[51], city2[51];

    fgets(city1, sizeof(city1), stdin);
    city1[strcspn(city1, "\n")] = '\0';

    fgets(city2, sizeof(city2), stdin);
    city2[strcspn(city2, "\n")] = '\0';

    char City1LastLetter = tolower(city1[strlen(city1) - 1]);
    char City2FirstLetter = tolower(city2[0]);
    char City1FirstLetter = tolower(city1[0]);
    char City2LastLetter = tolower(city2[strlen(city2) - 1]);

    if ((City1LastLetter == City2FirstLetter) || (City1FirstLetter == City2LastLetter))
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}
/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 50
int main() {
    char city_name1[MAX_SIZE], city_name2[MAX_SIZE];
    scanf("%s %s", city_name1, city_name2);
    if (tolower(city_name1[0]) == tolower(city_name2[strlen(city_name2)-1])
        || tolower(city_name2[0]) == tolower(city_name1[strlen(city_name1)-1]) )
        puts("yes");
    else
        puts("no");
    return 0;
}
*/