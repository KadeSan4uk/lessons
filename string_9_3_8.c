#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char *getMorseCode(char c)
{
    switch (toupper(c))
    {
    case 'A':
        return ".-";
    case 'B':
        return "-...";
    case 'C':
        return "-.-.";
    case 'D':
        return "-..";
    case 'E':
        return ".";
    case 'F':
        return "..-.";
    case 'G':
        return "--.";
    case 'H':
        return "....";
    case 'I':
        return "..";
    case 'J':
        return ".---";
    case 'K':
        return "-.-";
    case 'L':
        return ".-..";
    case 'M':
        return "--";
    case 'N':
        return "-.";
    case 'O':
        return "---";
    case 'P':
        return ".--.";
    case 'Q':
        return "--.-";
    case 'R':
        return ".-.";
    case 'S':
        return "...";
    case 'T':
        return "-";
    case 'U':
        return "..-";
    case 'V':
        return "...-";
    case 'W':
        return ".--";
    case 'X':
        return "-..-";
    case 'Y':
        return "-.--";
    case 'Z':
        return "--..";
    default:
        return "";
    }
}

int main()
{
    char input[51];

    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    char morseCode[400] = "";

    for (int i = 0; i < strlen(input); i++)
    {
        char currentChar = input[i];

        if (isalpha(currentChar))
        {
            strcat(morseCode, getMorseCode(currentChar));
            strcat(morseCode, "|");
        }
        else if (currentChar == ' ')
        {
            strcat(morseCode, "|:_..._:|");
        }
    }

    printf("%s\n", morseCode);

    return 0;
}
