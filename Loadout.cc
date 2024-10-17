#include "Loadout.h"

Loadout::Loadout(){
    p = Primary();
    s = Secondary();
    h = Support();
    t = Throwable();
    penetration_target = 0;
    damage_target = 0;
}

void Loadout::Generate(){
    bool done = false;
    int check;
    while(!done){
    p.random();
    s.random();
    h.random();
    t.random();
    check = total_penetration();
    if(check >= penetration_target){
        done = true;
    }
    }
}

void Loadout::display(){
    cout << "\n";
    p.output();
    s.output();
    h.output();
    t.output();
}

int Loadout::total_penetration(){
    int tp;
    tp = p.get_penetration() + s.get_penetration() + h.get_penetration() + (t.get_penetration() / 2);
    return tp;
}

int Loadout::total_damage(){
    int td;
    td = p.get_damage() + s.get_damage() + t.get_damage() + (h.get_penetration() * 150);
    return td;
}