#include "functions.h"
#include "menu.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// character = name, hp, total_hp, alive
character frieren = {"Frieren",200,200, true};
character eisen={"Eisen",500,500, true};
character heiter={"Heiter",200,200, true};
character himmel={"Himmel", 300,300, true};
character demon_king= {"King",1000,1000, true};

int main()
{
    const int PARTY_MEMBERS = 4;
    character party[] = {frieren, heiter, eisen, himmel};

    while (true)
    {
        system("clear");

        // updates the status of a character | alive/dead
        update_party(party, PARTY_MEMBERS);

        if (party_alive(party, PARTY_MEMBERS) == false)
        {
            printf("You lost! Good luck next time\n.");
            break;
        }
        
        if(enemy_alive(demon_king) == false)
        {
            system("clear");
            printf("Congrats! you killed the demon king. A new peace age will appear\n");
            break;

        }

        for (int i = 0; i < PARTY_MEMBERS; i++)
        {
            menu(party, i, demon_king);
        }

        kings_turn(party, PARTY_MEMBERS, demon_king);

    }

    return 0;
}