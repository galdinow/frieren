   struct characters{
        int hp;
        int atk;
        int def;
        int level;
    };
    typedef struct characters ch;

    void status_party(int *charac, ch frieren, ch warrior, ch heiter){

        if(frieren.hp <=0){
            *charac --;
        }
        if(warrior.hp <=0){
           *charac --;
        }
        if(heiter.hp <=0){
            *charac --;
        }
        return charac;
    }