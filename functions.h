#ifndef functions
#define functions
struct characters{
    char name[10];
    int hp;
    int total_hp;
    int atk;
    int def;
    int level;
    char attack1[20];
    char attack2[20];
    char attack3[20];
};
typedef struct characters ch;

struct bag{
    char item1[20];
    int uses1;
    char item2[20];
    int uses2;
    char item3[20];
    int uses3;

};
typedef struct bag bg;
// status_party(int  *charac, ch frieren, ch warrior, ch heiter);

int menu(ch *x, ch *y);
int menu_attack(ch *x, int cont);
int  menu_party(ch *x, ch *y,ch *z, ch *w);
void kings_turn(int rn_party, int rn_attack, ch *frieren, ch * himmel, ch *heiter, ch *eisen, ch *king_demon);
int members(ch *frieren, ch *himmel,ch * heiter,ch *eisen );

int menu_bag( bg *x, ch *y);

#endif
