#include "Throwable.h"

Throwable::Throwable(){
    name = "";
    damage = 0;
    radius = 0;
    penetration = 0;
}

void Throwable::random(){
    srand((unsigned)time(NULL));
    int choice = rand() % 10;
    switch(choice){
        case 1:
        name = "Frag";
        damage = 500;
        radius = 10;
        penetration = 3; 
        break;

        case 2:
        name = "High Explosive";
        damage = 800;
        radius = 7;
        penetration = 4; 
        break;

        case 3:
        name = "Incendiary";
        damage = 300;
        radius = 7;
        penetration = 3; 
        break;

        case 4:
        name = "Impact";
        damage = 400;
        radius = 7;
        penetration = 4; 
        break;

        case 5:
        name = "Incendiary Impact";
        damage = 150;
        radius = 7;
        penetration = 3; 
        break;

        case 6:
        name = "Stun";
        damage = 0;
        radius = 10;
        penetration = 6; 
        break;

        case 7:
        name = "Gas";
        damage = 3;
        radius = 7;
        penetration = 6; 
        break;

        case 8:
        name = "Smoke";
        damage = 0;
        radius = 5;
        penetration = 0; 
        break;

        case 9:
        name = "Thermite";
        damage = 2000;
        radius = 3;
        penetration = 7; 
        break;

        case 0:
        name = "Throwing Knife";
        damage = 250;
        radius = 0;
        penetration = 3; 
        break;

    }
}

void Throwable::output(){
    cout << "Throwable: " << name << endl;
}