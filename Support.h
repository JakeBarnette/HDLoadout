#ifndef SUPPORT_H
#define SUPPORT_H

#include <iostream>
#include <string>

using namespace std;

class Support{
    public:
    Support();

    std::string get_name(){return name;}
    int get_penetration(){return penetration;}
    int get_meta(){return meta;}

    void set_name(std::string n){name = n;}
    void set_penetration(int p){penetration = p;}
    void set_meta(int m){meta = m;}

    void random();
    void output();

    private:
    std::string name;
    int penetration;
    int meta;
};

#endif