#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <stdbool.h>

typedef struct
{
    char *name;
    int damage; 
}attack;

typedef struct
{
    char name[10];
    int hp;
    int total_hp;
    bool alive;
} character;

// colocar array de personagens
void enemy_turn(character party[], int length, character enemy);
void update_party(character party[], int length);
bool party_alive(character party[], int length);
bool enemy_alive(character enemy);


#endif
