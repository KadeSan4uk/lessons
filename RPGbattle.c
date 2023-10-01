#include <stdio.h>
#include <string.h>
int hello(char *nickname)
{
   char c;
   int len;
   printf("what is your Name?\n");

     fgets(nickname, sizeof(nickname),stdin);//scanf("%9[^\n]", nickname);          
     len = strlen(nickname);
     if( nickname[len-1]=='\n') //short imput
        nickname[len-1]='\0';
        else                  //long input
     {
        while(getchar()!= '\n'&& c!=EOF)  ; //clean buffer                                   
     }
                                        
    printf ("Hi,%s.\n", nickname);    
    

}

int battle(int player_gold)
{
   int goblin_hp=3;
   int goblin_gold = 15;
         printf("Goblin HP = %d\n", goblin_hp);
         while( goblin_hp >= 0 )
        {
         if(goblin_hp!=3|| goblin_hp>=0)
         printf("You kick goblin 1 damage.\t HP:%d\n", goblin_hp-1);
         if (goblin_hp <=2)
         {
            printf("You defeat it.\n");
            player_gold += goblin_gold;
            printf("You found %d gold.You have %d gold total\n",
             goblin_gold, player_gold);
            break;
         }
         goblin_hp--;
        }
        return player_gold;
}