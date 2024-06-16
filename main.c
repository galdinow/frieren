#include <stdio.h>
#include "characters.h"
    struct characters{
        int hp;
        int atk;
        int def;
        int level;
    };
    typedef struct characters ch;
int main(){
    int language;
    ch frieren = {100,50,50,12}, warrior={150,60,40,14}, heiter={60,13,53,13}, king_demon= {100,53,53,63};
    int charac =3;
    printf("Escolha a sua ligua/choose your language");
    printf("[1]-English/[2]-portugues");
    do{
    scanf("%d", &language);
    }while(language ==1 || language == 2);

    while (1){
        if (charac == 0){
            break;
        }
        status_party();



    }


    return 0;
}