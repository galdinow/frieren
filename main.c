#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include <time.h>

int main(){
    //initialiazing the variables
    int escolha;

    //inicializzacao dos personagens
    character frieren = {"Frieren",200,200,50,50,12, "zoltrak","fireball", "batata"}
    , eisen={"Eisen",500,500,60,40,14,"cabecada", "furia do anao","soco"},
     heiter={"Heiter",200,200,13,53,13,"ataque da deusa", "furia da deusa", "ataque de luz"},
     himmel={"Himmel", 300,300,13,53,13, "Avanco do heroi", "charme do heroi", "corte profundo"},
      king_demon= {"King",1000,1000,53,53,63,"arroz", "ice ball", "mud"};

    int party_alive =4;
    character characters[5] = {&frieren, &heiter, &eisen,&himmel, &king_demon};

    // actual game
    int cont =0;
    while (1){
        system("clear");
        int escolha =0;
        int attack;
        int item;
        //verifica se o boss esta vivo
        if(king_demon.hp <0){
            king_demon.hp = 0;
            system("clear");
            printf("Parabens, voce derrotou o rei demonio. Uma nova era de paz surgira");

        }
        //verifica quantos aliados estao vivos
        if(members(&frieren,&himmel,&heiter,&eisen) == 0){
            printf("voce falhou!!");
        }

        escolha = menu(characters[cont],&king_demon);
        if (escolha == 1){
            //clear screen
            system("clear");
           attack = menu_attack(characters[cont], cont);
           if (cont == 0){
                if(attack == 1){
                    king_demon.hp -= 50;
                    
                }
                else if (attack == 2){
                    king_demon.hp -= 100;
                }
                else if (attack == 3){
                    king_demon.hp -= 110;
                }
           }

           if (cont == 1){
                if(attack == 1){
                    king_demon.hp -= 50;
                }
               else if (attack == 2){
                    king_demon.hp -= 100;
                }
                else if (attack == 3){
                    king_demon.hp -= 110;
                }
           }

           if (cont == 2){
                if(attack == 1){
                    king_demon.hp -= 50;
                }
                else if (attack == 2){
                    king_demon.hp -= 100;
                }
                else if (attack == 3){
                    king_demon.hp -= 110;
                }
           }
           if (cont == 3){
                if(attack == 1){
                    king_demon.hp -= 50;
                }
                else if (attack == 2){
                    king_demon.hp -= 100;
                }
                else if (attack == 3){
                    king_demon.hp -= 110;
                }
           }
           

        }
        

        else if(escolha == 2){
            system("clear");
            menu_party(characters[0],characters[1],characters[2],characters[3]);

        }
        else{
            return 0;

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
        if(cont ==4){
            cont =0;

        }
    }

    return 0;
}