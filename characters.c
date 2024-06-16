   struct characters{
        int hp;
        int atk;
        int def;
        int level;
    };

    void status_party(charac, ch frieren, ch warrior, ch heiter){

        if(frieren.hp <=0){
            charac -1;
        }
        if(warrior.hp <=0){
            charac -1;
        }
        if(heiter.hp <=0){
            charac -1;
        }
    }