#include <stdio.h>
#include "functions.h"


// int status_party(int charac, ch frieren, ch warrior, ch heiter){

//     if(frieren.hp <=0){
//         charac --;
//     }
//     if(warrior.hp <=0){
//         charac --;
//     }
//     if(heiter.hp <=0){
//         charac --;
//     }
//     return charac;
// }

int menu(ch *x, int y){
    //perguntar para a ana sobre ponteiros
    int escolha =0;
    printf("   ---------------------------------------------------------------------------\n");
    printf("   | %s- hp: %d\\%d                         next character:            |\n", x->name,x->hp,x->hp);
    printf("   |     lvl: %d                       turns until enemy's action:           |\n", x->level);
    printf("   |                                                                         |\n");
    printf("   |     1 - attack                       3 - see party                      |\n");
    printf("   |                                                                         |\n");
    printf("   |     2 - bag                         4 - restart battle                  |\n");
    printf("   |                                                                         |\n");
    printf("   |                                                                         |\n");
    printf("   ---------------------------------------------------------------------------\n");
    scanf("%d", &escolha);
    return escolha;
}

int menu_attack(ch *x, int cont){
    int escolha;
    printf("   ---------------------------------------------------------------------------\n");
    printf("   | %s- hp: %d\\%d                         next character:            |\n", x->name,x->hp,x->hp);
    printf("   |     lvl: %d                       turns until enemy's action:           |\n", x->level);
    printf("   |                                                                         |\n");
    printf("   |     1 -%s                     3 -%s                |\n", x->attack1, x->attack3);
    printf("   |                                                                         |\n");
    printf("   |     2 -%s                      4 -go back                   |\n", x->attack2);
    printf("   |                                                                         |\n");
    printf("   |                                                                         |\n");
    printf("   ---------------------------------------------------------------------------\n");
    //scanf("%d", &escolha);
    //return escolha;

}

void menu_party(ch *x, ch *y,ch *z, ch *w){
    //verificar se a posicao das variaveis da funcao eh a mesma que foi implementada na main e se bate certinho com o menu
    int escolha =0;
    printf("   ---------------------------------------------------------------------------\n");
    printf("   |                                                                         |\n");
    printf("   |                                                                         |\n");
    printf("   |                                                                         |\n");
    printf("   |      frieren-hp: %d/%d                       anao-hp %d/%d                    |\n", x->hp, x->total_hp,y->hp,y->total_hp);
    printf("   |                                                                         |\n");
    printf("   |      himmel-hp %d/%d                         heiter-hp: %d/%d                  |\n", z->hp, z->total_hp,w->hp, w->total_hp);
    printf("   |                                                                         |\n");
    printf("   |                         4 - go back                                         |\n");
    printf("   ---------------------------------------------------------------------------\n");
    //scanf("%d", &escolha);

    //return escolha;
}

/*void menu_bag(ch *x){
    printf("   ---------------------------------------------------------------------------\n");
    printf("   | %s- hp: %d\\%d                         next character:            |\n", x->name,x->hp,x->hp);
    printf("   |     lvl: %d                       turns until enemy's action:           |\n", x->level);
    printf("   |                                                                         |\n");
    printf("   |     1 -%c                     3 -%c                |\n", x->attack1, x->attack3);
    printf("   |                                                                         |\n");
    printf("   |     2 -%c                         4 -go back                   |\n", x->attack2);
    printf("   |                                                                         |\n");
    printf("   |                                                                         |\n");
    printf("   ---------------------------------------------------------------------------\n");



}*/