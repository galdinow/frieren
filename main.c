#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(){
    //initialiazing the variables
    int language;
    int escolha;
    ch frieren = {"frieren",100,100,50,50,12, "zoltrak","fireball", "batata"}
    , warrior={"warrior",150,150,60,40,14},
     heiter={"heiter",60,60,13,53,13},
      king_demon= {"king",100,100,53,53,63};

    int party_alive =3;
    ch characters[4] = {frieren, heiter, warrior, king_demon};

    /*bg frieren_bag = {"frieren", "mistery potion", "rock", "water"}
    , warrior_bag={"warrior", "sla", "aa","ab"},
     heiter_bag= {"heiter", "afa","gag", "fsfsv"}, king_demon_bag={"king demon", "afss","gnknkmk","kmsdkms"};
     bg characters_bag[4]={frieren_bag,heiter_bag,warrior_bag,king_demon_bag};*/
    // choosing a preferred language
    /*printf("Escolha a sua ligua/choose your language\n");
    printf("[1]-English/[2]-portugues");
    do{
    scanf("%d", &language);
    }while(language ==1 || language == 2);*/

    // actual game
    while (1){
        system("clear");
        int cont =0;
        
        /*if (status_party(&party_alive, frieren.hp,warrior.hp,heiter.hp) == 0){
            break;
        }*/
        escolha = menu(&characters[cont], cont);
        if (escolha == 1){
            //clear screen
            system("clear");
            menu_attack(&characters[cont], cont);

        }
        else if(escolha == 2){
            //clear screen
            //menu_bag(&characters[cont]);

        }
        else if(escolha == 3){
            menu_party(&characters[0],&characters[1],&characters[2],&characters[3]);

        }
        else{
            //resetar o game

        }
        cont++;

    }
    return 0;
}