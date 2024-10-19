#include "Support.h"

Support::Support(){
    name = " ";
    penetration = 0;
    meta = 0;
}

void Support::random(){
    srand((unsigned)time(NULL));
    int choice = rand() % 17;
    switch(choice){  //17
        case 1:
        name = "Machine Gun";
        penetration = 2;
        meta = 4;
        break;

        case 2:
        name = "Anti-Material Rifle";
        penetration = 3;
        meta = 3;
        break;
        
        case 3:
        name = "Stallwart";
        penetration = 1;
        meta = 2;
        break;
        
        case 4:
        name = "EAT";
        penetration = 4; 
        meta = 5;
        break;
        
        case 5:
        name = "Recoilless Rifle";
        penetration = 4;
        meta = 5;
        break;
        
        case 6:
        name = "Flamethrower";
        penetration = 3;
        meta = 3;
        break;
        
        case 7:
        name = "Autocannon";
        penetration = 3;
        meta = 3;
        break;
        
        case 8:
        name = "Heavy Machine Gun";
        penetration = 3;
        meta = 4;
        break;
        
        case 9:
        name = "Airburst";
        penetration = 2;
        meta = 2;
        break;
        
        case 10:
        name = "Commando";
        penetration = 4;
        meta = 5;
        break;
        
        case 11:
        name = "Railgun";
        penetration = 4;
        meta = 5;
        break;
        
        case 12:
        name = "Spear";
        penetration = 4;
        meta = 4;
        break;
        
        case 13:
        name = "Grenade Launcher";
        penetration = 2;
        meta = 3;
        break;
        
        case 14:
        name = "Laser Cannon";
        penetration = 3;
        meta = 3;
        break;
        
        case 15:
        name = "Arc Thrower";
        penetration = 3;
        meta = 5;
        break;
        
        case 16:
        name = "Quasar Cannon";
        penetration = 4;
        meta = 5;
        break;
        
        case 0:
        name = "Sterilizer";
        penetration = 3;
        meta = 2;
        break;
        
    }
}

void Support::output(){
    switch(meta){
        case 1:
        cout << "Support: " << name << "\033[31m    * \033[0m* * * *\n";
        break;
        case 2:
        cout << "Support: " << name << "\033[33m    * * \033[0m* * *\n";
        break;
        case 3:
        cout << "Support: " << name << "\033[32m    * * * \033[0m* *\n";
        break;
        case 4:
        cout << "Support: " << name << "\033[32m    * * * \033[0m* *\n";
        break;
        case 5:
        cout << "Support: " << name << "\033[36m    * * * * *\033[0m\n";
        break;
        case 0:
        cout << "Support: " << name << endl;
        break;
    }
}