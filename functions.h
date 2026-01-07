#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <stdbool.h>
typedef struct{
    char name[10];
    int hp;
    int total_hp;
    int level;
    bool alive;
} character;

// colocar array de personagens
void kings_turn(int rn_party, int rn_attack, character *king_demon);
void update_party(character party[], int length);
bool party_alive(character party[], int length);
bool enemy_alive(character enemy);


#endif
