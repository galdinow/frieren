#include "menu.h"
#include "functions.h"

int menu(character *x, character *y){
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

int menu_attack(character *x, int cont){
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

 int menu_party(character *x, character *y,character *z, character *w){
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