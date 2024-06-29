#include <stdio.h>
#include "functions.h"


// void status_party(int *charac, ch frieren, ch warrior, ch heiter){

//     if(frieren.hp <=0){
//         *charac --;
//     }
//     if(warrior.hp <=0){
//         *charac --;
//     }
//     if(heiter.hp <=0){
//         *charac --;
//     }
//     return charac;
// }

int menu(ch *x, ch *y){
    int escolha =0;
    printf("   ---------------------------------------------------------------------------\n");
    printf("   | %s- hp: %d\\%d                         next character:            |\n", x->name,x->hp,x->total_hp);
    printf("   |     lvl: %d                       turns until enemy's action:           |\n", x->level);
    printf("   |                                                                         |\n");
    printf("   |     1 - attack                       3 - see party                      |\n");
    printf("   |                                                                         |\n");
    printf("   |     2 - bag                         4 - restart battle                  |\n");
    printf("   |                                                                         |\n");
    printf("   |                   enemy's health: %d/%d                             |\n", y->hp, y->total_hp);
    printf("   ---------------------------------------------------------------------------\n");
    scanf("%d", &escolha);
    return escolha;
}

int menu_attack(ch *x, int cont){
    int escolha;
    printf("  ---------------------------------------------------------------------------\n");
    printf("   | %s- hp: %d\\%d                         next character:           |\n", x->name,x->hp,x->total_hp);
    printf("   |     lvl: %d                       turns until enemy's action:           |\n", x->level);
    printf("   |                                                                         |\n");
    printf("   |     1 -%s                     3 -%s                       |\n", x->attack1, x->attack3);
    printf("   |                                                                         |\n");
    printf("   |     2 -%s                      4 -skip                        |\n", x->attack2);
    printf("   |                                                                         |\n");
    printf("   |                                                                         |\n");
    printf("   ---------------------------------------------------------------------------\n");
    scanf("%d", &escolha);
    return escolha;

}

 int menu_party(ch *x, ch *y,ch *z, ch *w){
    //verificar se a posicao das variaveis da funcao eh a mesma que foi implementada na main e se bate certinho com o menu
    int escolha;
    printf("   ---------------------------------------------------------------------------\n");
    printf("   |                                                                         |\n");
    printf("   |                                                                         |\n");
    printf("   |                                                                         |\n");
    printf("   |      frieren-hp: %d/%d                       anao-hp %d/%d              |\n", x->hp, x->total_hp,y->hp,y->total_hp);
    printf("   |                                                                         |\n");
    printf("   |      himmel-hp %d/%d                         heiter-hp: %d/%d           |\n", z->hp, z->total_hp,w->hp, w->total_hp);
    printf("   |                                                                         |\n");
    printf("   |                         4 - skip                                    |\n");
    printf("   ---------------------------------------------------------------------------\n");
    scanf("%d", &escolha);

    return escolha;
}
void kings_turn(int rn_party, int rn_attack, ch *frieren, ch * himmel, ch *heiter, ch *eisen, ch *king_demon){
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

int members(ch *x, ch *y,ch * z,ch *w ){
    int alive =4;
    if(x->hp <0){
        x->hp == 0;
        alive--;
    }
    if(z->hp <0){
        z->hp == 0;
        alive--;
    }
    if(w->hp < 0){
        w->hp ==0;
        alive--;
    }
    if(y->hp < 0){
        y->hp == 0;
        alive--;
    }
    return alive;
}
int menu_bag(bg *x, ch *y){
    int escolha;
    printf("   ---------------------------------------------------------------------------\n");
    printf("   | %s- hp: %d\\%d                         next character:            |\n", y->name,y->hp,y->hp);
    printf("   |     lvl: %d                       turns until enemy's action:           |\n", y->level);
    printf("   |                                                                         |\n");
    printf("   |     1 -%s                     3 -%s                      |\n", x->item1, x->item3);
    printf("   |                                                                         |\n");
    printf("   |     2 -%s                         4 -go back                       |\n", x->item2);
    printf("   |                                                                         |\n");
    printf("   |                                                                         |\n");
    printf("   ---------------------------------------------------------------------------\n");

    scanf("%d",&escolha);
    return escolha;

}