#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <stdbool.h>
typedef struct{
    char name[10];
    int hp;
    int total_hp;
    int atk;
    int def;
    int level;
    bool alive;
} character;

typedef struct{
    char item1[20];
    int uses1;
    char item2[20];
    int uses2;
    char item3[20];
    int uses3;

} bag;
// status_party(int  *charac, ch frieren, ch warrior, ch heiter);

// colocar array de personagens
void kings_turn(int rn_party, int rn_attack, character *king_demon);
bool party_status(character party[], int length);


#endif
