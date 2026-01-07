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
    int alive = 0;
    for (int i = 0; i < length; i++)
    {
        if (party[i].alive == true)
        {
            alive++;
        }
    }
    if (alive == length)
    {
        return true;
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


void kings_turn(int rn_party, int rn_attack, character *frieren, character * himmel, character *heiter, character *eisen, character *king_demon){
    int heal =0;
    if(rn_attack == 1){

        if(rn_attack == 1){
            //ataque em area mas com pouco dano
            frieren->hp -= 5;
            himmel->hp -=5;
            heiter->hp -=5;
            eisen->hp -=5;
        }
    }
    else if (rn_attack == 0){
        //ataque que se cura em 20% da sua vida total
        if(king_demon->hp <king_demon->total_hp && king_demon->hp < king_demon->total_hp*0.5){
        heal = king_demon->total_hp * 0.2;
        king_demon->hp +=heal;
        }
    }
    else{
        if (rn_party == 0){
            // a mesnsagem de qual personagem foi atacado, bem como o dano tomado e seu hp eh mostrado na tela por 3 seg

            if(rn_attack == 2){
                //ataque de dano medio que retarda o turno do adversario
                frieren->hp -=30; 
            }
        }
        if (rn_party == 1){
            // a mesnsagem de qual personagem foi atacado, bem como o dano tomado e seu hp eh mostrado na tela por 3 seg

            if(rn_attack == 2){
                //ataque de dano medio que retarda o turno do adversario
                heiter->hp -=30; 
            }
        }
        if (rn_party == 2){
            // a mesnsagem de qual personagem foi atacado, bem como o dano tomado e seu hp eh mostrado na tela por 3 seg

            if(rn_attack == 2){
                //ataque de dano medio que retarda o turno do adversario
                eisen->hp -=30; 
            }
        }
        if (rn_party == 3){
            // a mesnsagem de qual personagem foi atacado, bem como o dano tomado e seu hp eh mostrado na tela por 3 seg

            if(rn_attack == 2){
                //ataque de dano medio que retarda o turno do adversario
                himmel->hp -=30; 
            }

        }

    }
}
