#include "functions.h"
#include "menu.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// character = name, hp, total_hp, level, alive
character frieren = {"Frieren",200,200,50,50,12, "zoltrak","fireball", "batata", true};
character eisen={"Eisen",500,500,60,40,14,"cabecada", "furia do anao","soco", true};
character heiter={"Heiter",200,200,13,53,13,"ataque da deusa", "furia da deusa", "ataque de luz", true};
character himmel={"Himmel", 300,300,13,53,13, "Avanco do heroi", "charme do heroi", "corte profundo", true};
character demon_king= {"King",1000,1000,53,53,63,"arroz", "ice ball", "mud", true};

int main()
{
    int escolha;
    const int PARTY_MEMBERS = 4;
    character party[] = {frieren, heiter, eisen, himmel};

    // actual game
    while (true)
    {
        system("clear");

        // updates the status of a character | alive/dead
        update_party(party, PARTY_MEMBERS);

        if (party_alive(party, PARTY_MEMBERS) == false)
        {
            printf("You lost! Good luck next time.");
            break;
        }
        
        if(enemy_alive(demon_king) == false)
        {
            system("clear");
            printf("Parabens, voce derrotou o rei demonio. Uma nova era de paz surgira");
            break;

        }


        kings_turn(frieren, himmel, heiter, eisen, demon_king);

    }

    return 0;
}