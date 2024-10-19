#ifndef THROWABLE_H
#define THROWABLE_H

#include <iostream>
#include <string>

using namespace std;

class Throwable{
    public:
    Throwable();

    std::string get_name(){return name;}
    int get_damage(){return damage;}
    int get_radius(){return radius;}
    int get_penetration(){return penetration;}
    int get_meta(){return meta;}

    void set_name(std::string n){name = n;}
    void set_damage(int d){damage = d;}
    void set_radius(int r){radius = r;}
    void set_penetration(int p){penetration = p;}
    void set_meta(int m){meta = m;}

    void random();
    void output();



    private:
    std::string name;
    int damage;
    int radius;
    int penetration;
    int meta;
};

#endif