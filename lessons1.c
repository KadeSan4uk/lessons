#include <stdio.h>

void ft_print_alphabet(void)
{
 char letter ='a';

 while(letter<='z')
{
    printf("%c\n",letter);
    letter++;
}
    printf("\n");
}

int main()
{
   ft_print_alphabet();
   return 0;

    
}
