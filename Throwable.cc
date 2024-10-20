#include "Throwable.h"

Throwable::Throwable(){
    name = "";
    damage = 0;
    radius = 0;
    penetration = 0;
    meta = 0;
    botmeta = 0;
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
        meta = 3;
        botmeta = 3;
        break;

        case 2:
        name = "High Explosive";
        damage = 800;
        radius = 7;
        penetration = 4; 
        meta = 4;
        botmeta = 4;
        break;

        case 3:
        name = "Incendiary";
        damage = 300;
        radius = 7;
        penetration = 3; 
        meta = 3;
        botmeta = 1;
        break;

        case 4:
        name = "Impact";
        damage = 400;
        radius = 7;
        penetration = 4; 
        meta = 5;
        botmeta = 3;
        break;

        case 5:
        name = "Incendiary Impact";
        damage = 150;
        radius = 7;
        penetration = 3; 
        meta = 5;
        botmeta = 1;
        break;

        case 6:
        name = "Stun";
        damage = 0;
        radius = 10;
        penetration = 6; 
        meta = 2;
        botmeta = 4;
        break;

        case 7:
        name = "Gas";
        damage = 3;
        radius = 7;
        penetration = 6; 
        meta = 2;
        botmeta = 2;
        break;

        case 8:
        name = "Smoke";
        damage = 0;
        radius = 5;
        penetration = 0; 
        meta = 1;
        botmeta = 4;
        break;

        case 9:
        name = "Thermite";
        damage = 2000;
        radius = 3;
        penetration = 7; 
        meta = 5;
        botmeta = 5;
        break;

        case 0:
        name = "Throwing Knife";
        damage = 250;
        radius = 0;
        penetration = 3; 
        meta = 2;
        botmeta = 2;
        break;

    }
}

void Throwable::output(){
    switch(meta){
        case 1:
        cout << "Throwable: " << name << "\033[31m    * \033[0m* * * *\n";
        break;
        case 2:
        cout << "Throwable: " << name << "\033[33m    * * \033[0m* * *\n";
        break;
        case 3:
        cout << "Throwable: " << name << "\033[32m    * * * \033[0m* *\n";
        break;
        case 4:
        cout << "Throwable: " << name << "\033[32m    * * * *\033[0m *\n";
        break;
        case 5:
        cout << "Throwable: " << name << "\033[36m    * * * * *\033[0m\n";
        break;
        case 0:
        cout << "Throwable: " << name << endl;
        break;
    }
}

void Throwable::outputbot(){
    switch(botmeta){
        case 1:
        cout << "Throwable: " << name << "\033[31m    * \033[0m* * * *\n";
        break;
        case 2:
        cout << "Throwable: " << name << "\033[33m    * * \033[0m* * *\n";
        break;
        case 3:
        cout << "Throwable: " << name << "\033[32m    * * * \033[0m* *\n";
        break;
        case 4:
        cout << "Throwable: " << name << "\033[32m    * * * *\033[0m *\n";
        break;
        case 5:
        cout << "Throwable: " << name << "\033[36m    * * * * *\033[0m\n";
        break;
        case 0:
        cout << "Throwable: " << name << endl;
        break;
    }
}