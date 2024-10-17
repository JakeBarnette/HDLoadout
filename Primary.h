#ifndef PRIMARY_H
#define PRIMARY_H

#include <iostream>
#include <string>

using namespace std;

class Primary{
    public:
        Primary();
        
        //getters
        std::string get_name(){return name;}
        int get_damage(){return damage;}
        int get_firerate(){return firerate;}
        int get_dps(){return dps;}
        int get_penetration(){return penetration;}


        //mutators
        void set_name(std::string n){name = n;}
        void set_damage(int d){damage = d;}
        void set_firerate(int f){firerate = f;}
        void set_penetration(int p){penetration = p;}

        //inclass Primary generator
        void random();
        void output();

    private:
        std::string name;
        int damage;
        int firerate;
        int dps;
        int penetration;
};

#endif