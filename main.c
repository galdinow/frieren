#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include <time.h>

int main(){
    //initialiazing the variables
    int language;
    int escolha;
    ch frieren = {"frieren",100,100,50,50,12, "zoltrak","fireball", "batata"}
    , eisen={"eisen",150,150,60,40,14,"cabecada", "furia do anao","soco"},
     heiter={"heiter",60,60,13,53,13,"ataque da deusa", "furia da deusa", "ataque de luz"},
     himmel={"himmel", 60,60,13,53,13, "Avanco do heroi", "charme do heroi", "corte profundo"},
      king_demon= {"king",1000,1000,53,53,63,"arroz", "ice ball", "mud"};

    int party_alive =4;
    ch *characters[5] = {&frieren, &heiter, &eisen,&himmel, &king_demon};

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
    int cont =0;
    while (1){
        system("clear");
        int escolha =0;
        int attack =0;
        
        /*if (status_party(&party_alive, frieren.hp,warrior.hp,heiter.hp) == 0){
            break;
        }*/
    //frieren.hp -= 20;
        
        if(king_demon.hp <0){
            king_demon.hp = 0;
            return 0;

        }
        members(&frieren,&himmel,&heiter,&eisen);

        escolha = menu(characters[cont],&king_demon);
        if (escolha == 1){
            //clear screen
            system("clear");
           attack = menu_attack(characters[cont], cont);
           if (cont == 0){
                if(attack == 1){
                    king_demon.hp -= 50;
                    
                }
                if (attack == 2){
                    king_demon.hp -= 100;
                }
                if (attack == 3){
                    king_demon.hp -= 110;
                }
           }

           if (cont == 1){
                if(attack == 1){
                    king_demon.hp -= 50;
                }
                if (attack == 2){
                    king_demon.hp -= 100;
                }
                if (attack == 3){
                    king_demon.hp -= 110;
                }
           }

           if (cont == 2){
                if(attack == 1){
                    king_demon.hp -= 50;
                }
                if (attack == 2){
                    king_demon.hp -= 100;
                }
                if (attack == 3){
                    king_demon.hp -= 110;
                }
           }
           if (cont == 3){
                if(attack == 1){
                    king_demon.hp -= 50;
                }
                if (attack == 2){
                    king_demon.hp -= 100;
                }
                if (attack == 3){
                    king_demon.hp -= 110;
                }
           }
           

        }
        else if(escolha == 2){
            //clear screen
            //menu_bag(&characters[cont]);

        }
        else if(escolha == 3){
            system("clear");
            menu_party(characters[0],characters[1],characters[2],characters[3]);

        }
        else{
            //resetar o game

        }

        int upper =3;
        int lower =0;
        srand(time(NULL));
        int rn_party = (rand() % (upper-lower+1)) +lower;

        int upper1 = 2;
        int lower1=0;
        srand(time(NULL)+5);
        int rn_attack= (rand() % (upper1-lower1+1)) +lower1;
        kings_turn(rn_party,rn_attack,&frieren, &himmel, &heiter,&eisen, &king_demon);
        cont++;
        if(cont ==3){
            cont =0;

        }
    }

    return 0;
}