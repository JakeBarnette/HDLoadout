#ifndef SECONDARY_H
#define SECONDARY_H

#include <iostream>
#include <string>

using namespace std;


class Secondary{
    public:
        Secondary();
        
        //getters
        std::string get_name(){return name;}
        int get_damage(){return damage;}
        int get_firerate(){return firerate;}
        int get_dps(){return dps;}
        int get_penetration(){return penetration;}
        int get_meta(){return meta;}
        int get_botmeta(){return botmeta;}


        //mutators
        void set_name(std::string n){name = n;}
        void set_damage(int d){damage = d;}
        void set_firerate(int f){firerate = f;}
        void set_penetration(int p){penetration = p;}
        void set_meta(int m){meta = m;}
        void set_botmeta(int m){botmeta = m;}

        //inclass Secondary generator
        void random();
        void output();
        void outputbot();

    private:
        std::string name;
        int damage;
        int firerate;
        int dps;
        int penetration;
        int meta;
        int botmeta;
};

#endif