#ifndef LOADOUT_H
#define LOADOUT_H

#include "Primary.h"
#include "Secondary.h"
#include "Throwable.h"
#include "Support.h"
#include <iostream>
#include <string>

using namespace std;

class Loadout{
    public:
    Loadout();

    void Generate();
    bool eval();
    void display();
    void displayPARA();
    int total_penetration();
    void set_pt(int s){penetration_target = s;} 
    int total_dps();
    void set_dt(int d){damage_target = d;}
    int total_meta(); //on a scale of five stars
    void set_mt(int m){meta_target = m;}
    void set_bug(bool e){bug = e;}
    void byebye();

    


    private:
    Primary p; //p for primary
    Secondary s; //s for secondary
    Support h; //h for heavy
    Throwable t; //t for throwable
    int penetration_target;
    int damage_target;
    int meta_target;
    bool bug;
};

#endif