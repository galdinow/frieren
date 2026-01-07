#ifndef functions
#define functions
typedef struct{
    char name[10];
    int hp;
    int total_hp;
    int atk;
    int def;
    int level;
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

int menu(ch *x, ch *y);
int menu_attack(ch *x, int cont);
int  menu_party(ch *x, ch *y,ch *z, ch *w);
void kings_turn(int rn_party, int rn_attack, ch *frieren, ch * himmel, ch *heiter, ch *eisen, ch *king_demon);
int members(ch *frieren, ch *himmel,ch * heiter,ch *eisen );


#endif
