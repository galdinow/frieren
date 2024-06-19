#ifndef functions
#define functions
struct characters{
    char name[10];
    int hp;
    int total_hp;
    int atk;
    int def;
    int level;
    char attack1[10];
    char attack2[10];
    char attack3[10];
};
typedef struct characters ch;

struct bag{
    char name;
    char item1[20];
    char item2[20];
    char item3[20];

};
typedef struct bag bg;
// status_party(int  *charac, ch frieren, ch warrior, ch heiter);

int menu(ch *x, int y);
int menu_attack(ch *x, int cont);
void menu_party(ch *x, ch *y,ch *z, ch *w);
// void menu_bag(ch *x);

#endif