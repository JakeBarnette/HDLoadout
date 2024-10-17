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
    void display();
    int total_penetration();
    void set_pt(int s){penetration_target = s;}
    int total_damage();
    void set_dt(int d){damage_target = d;}
    


    private:
    Primary p; //p for primary
    Secondary s; //s for secondary
    Support h; //h for heavy
    Throwable t; //t for throwable
    int penetration_target;
    int damage_target;
};

#endif