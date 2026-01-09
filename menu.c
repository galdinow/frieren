#include "menu.h"
#include "functions.h"
#include <stdio.h>

void menu(character party[], int turn, character enemy)
{
    int action = 0;
    printf("   ---------------------------------------------------------------------------\n");
    printf("   | %s- hp: %d\\%d                         next character:%s            |\n", party[turn].name,party[turn].hp,party[turn].total_hp), party[turn + 1].name;
    printf("   |                           turns until enemy's action:           |\n");
    printf("   |                                                                         |\n");
    printf("   |     1 - attack                       2 - see party                      |\n");
    printf("   |                                                                         |\n");
    printf("   |     3 - bag                         4 - restart battle                  |\n");
    printf("   |                                                                         |\n");
    printf("   |                   enemy's health: %d/%d                             |\n", enemy.hp, enemy.total_hp);
    printf("   ---------------------------------------------------------------------------\n");
    do
    {
        scanf("%d", &action);
    }
    while (action < 1 || action > 4);

    // if (action == 1)
    // {
    //     printf("  ---------------------------------------------------------------------------\n");
    //     printf("   | %s- hp: %d\\%d                         next character:           |\n", x->name,x->hp,x->total_hp);
    //     printf("   |     lvl: %d                       turns until enemy's action:           |\n", x->level);
    //     printf("   |                                                                         |\n");
    //     printf("   |     1 -%s                     3 -%s                       |\n", x->attack1, x->attack3);
    //     printf("   |                                                                         |\n");
    //     printf("   |     2 -%s                      4 -skip                        |\n", x->attack2);
    //     printf("   ---------------------------------------------------------------------------\n");
    // }

    // else if (action == 2)
    // {
    //     printf("   ---------------------------------------------------------------------------\n");
    //     printf("   |      frieren-hp: %d/%d                       anao-hp %d/%d              |\n", x->hp, x->total_hp,y->hp,y->total_hp);
    //     printf("   |                                                                         |\n");
    //     printf("   |      himmel-hp %d/%d                         heiter-hp: %d/%d           |\n", z->hp, z->total_hp,w->hp, w->total_hp);
    //     printf("   |                                                                         |\n");
    //     printf("   |                         4 - skip                                    |\n");
    //     printf("   ---------------------------------------------------------------------------\n");
    // }
    return ;
}
