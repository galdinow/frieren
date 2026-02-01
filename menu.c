#include <ctype.h>
#include "menu.h"
#include "functions.h"
#include <stdio.h>
#include <string.h>

int menu_wall = 40;

void menu_header()
{
    printf("+");
    for (int i = 0; i < menu_wall; i++)
    {   
        printf("-");
    }
    printf("+");
    printf("\n");
    return;
}


void show_current_stats(character party[], int turn)
{
    char buffer[40];

    sprintf(buffer, "%s - HP: %i/%i", party[turn].name, party[turn].hp, party[turn].total_hp);

    printf(buffer);

    return ;
}

void show_next_character(character party[], int turn)
{
    int buffer[40];
    sprintf(buffer, "%s - HP: %i/%i", party[turn+1].name, party[turn+1].hp, party[turn+1].total_hp);

    printf(buffer);
    
    return;
}

void menu(character party[], int turn, character enemy)
{
    // change this logic later
    int spaces = 10;
    
    show_current_hp(party, turn);
    
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    show_next_character(party, turn);
    menu_header();

    printf("Type one of the options to proceed.\n");
    printf("Action:");
}

int get_action()
{
    int action = 0;

    do
    {
        scanf("", &action);
    }
    while(action < 1 || action > 5);
    return ;
}


//     printf("   |                           turns until enemy's action:           |\n");
//     printf("   |                                                                         |\n");
//     printf("   |     Attack                      Party                      |\n");
//     printf("   |                                                                         |\n");
//     printf("   |     Bag                         Reset                  |\n");
//     printf("   |                                                                         |\n");
//     printf("   |                   Enemy's health: %d/%d                             |\n", enemy.hp, enemy.total_hp);
//     printf("   ---------------------------------------------------------------------------\n");
