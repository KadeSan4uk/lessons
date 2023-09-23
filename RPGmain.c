#include"RPGhadder.h"
#include<stdlib.h>



int main(void)
{
    rand();// 0->..
    printf("Rand MAX:%lld\n",RAND_MAX);

    char nickname[10];
    int player_gold=0;
    char action;
    
    hello(nickname);   
    
    printf ("You attacked by goblin.\t\t\t\t Press (A)ttack or (R)un\n");

    action = getchar(); // A / Enter

    while (action!='r')
    {
                
     if( action =='a'|| action =='A')
      {
       player_gold= battle(player_gold);
      }
                  
     printf("What to do Next?\t\t\t\t Press (A)ttack or (R)un\n");
     getchar();//clean buffer
     action=getchar();// <<Enter
    }
      if(action=='r')
     {
          printf("You earned %d gold! Good job!",player_gold);
     }

        

     return 0;
}
