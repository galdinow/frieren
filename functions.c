#include "functions.h"


void update_party(character party[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (party[i].hp == 0)
        {
            party[i].alive == false;
        }
    }
    return;
}
// checks if the party is dead
bool party_alive(character party[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (party[i].alive == true)
        {
            return true;
        }
    }
    return false;
}

bool enemy_alive(character enemy)
{
    if (enemy.hp > 0)
    {
        return true;
    }
    return false;
}


void party_attack(character member, character enemy)
{

    return;
}

void enemy_attack(character member, int length, character enemy)
{
    
    return;
}


void enemy_turn(character party[], int length, character enemy)
{
    //ataque em area mas com pouco dano
    
    //ataque que se cura em 20% da sua vida total

            // a mesnsagem de qual personagem foi atacado, bem como o dano tomado e seu hp eh mostrado na tela por 3 seg

                //ataque de dano medio que retarda o turno do adversario

            // a mesnsagem de qual personagem foi atacado, bem como o dano tomado e seu hp eh mostrado na tela por 3 seg

                //ataque de dano medio que retarda o turno do adversario

            // a mesnsagem de qual personagem foi atacado, bem como o dano tomado e seu hp eh mostrado na tela por 3 seg

                //ataque de dano medio que retarda o turno do adversario

            // a mesnsagem de qual personagem foi atacado, bem como o dano tomado e seu hp eh mostrado na tela por 3 seg

                //ataque de dano medio que retarda o turno do adversario

}
